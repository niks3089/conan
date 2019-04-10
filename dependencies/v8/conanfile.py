from conans import ConanFile,tools

class V8Conan(ConanFile):
    settings= "os","arch","build_type","compiler"
    name = "v8"
    version="7.5.202"
    license = 'BSD'
    description = 'Google Javascript engine'
    url = "http://www.includeos.org/"

    default_user="includeos"
    default_channel="test"

    def source(self):
        repo = tools.Git(folder="depot_tools")
        repo.clone("https://chromium.googlesource.com/chromium/tools/depot_tools.git")
        self.run("export PATH=$PATH:%s/depot_tools" % self.source_folder)
        self.run("fetch v8")
        self.run("gclient sync", cwd="v8")
        self.run("git checkout 7.5.202", cwd="v8")

    def build(self):
        self.run("build/install-build-deps.sh", cwd="v8")
        self.run("tools/dev/v8gen.py x64.release", cwd="v8")
        self.run("echo v8_static_library = true >> out.gn/x64.release/args.gn", cwd="v8")
        self.run("echo is_component_build = false >> out.gn/x64.release/args.gn", cwd="v8")
        self.run("ninja -C out.gn/x64.release", cwd="v8")
        self.run("touch out.gn/x64.release/args.gn", cwd="v8")
        self.run("ninja -C out.gn/x64.release", cwd="v8")

    def package(self):
        # Create thin archives to fat regular ones
        self.run("for lib in `find out.gn/x64.release/obj -name '*.a'`;\
                do ar -t $lib | xargs ar rvs $lib.new && mv -v $lib.new $lib; done", cwd="v8")
        self.copy("*.h", dst="include", src="v8/include")
        self.copy("*.a", dst="lib", src="v8/out.gn/x64.release/obj")

    def package_info(self):
       self.cpp_info.libs=['v8_libbase',
               'v8_libplatform',
               'v8_external_snapshot',
               'v8_libsampler']
