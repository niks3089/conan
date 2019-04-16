from conans import ConanFile,tools, CMake

class NodeConan(ConanFile):
    settings= "os","arch","build_type","compiler"
    name = "node"
    version="11.14.0"
    license = 'MIT'
    description = 'Cross-platform async IO'
    url = "https://nodejs.org/en/"

    default_user="includeos"
    default_channel="test"

    def source(self):
        repo = tools.Git(folder="node")
        repo.clone("https://github.com/nodejs/node.git",branch="v11.14.0")

    def build(self):
        self.run("CC=gcc CXX=g++ ./configure --without-snapshot --fully-static --enable-static",
                cwd=self.name)
        self.run("CC=gcc CXX=g++ make", cwd=self.name)

    def package(self):
        #self.copy("*.a",dst="lib",src="node/out/Release/obj.target/deps/http_parser")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.target/deps/cares")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.target/deps/gtest")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.target/deps/nghttp2")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.target/deps/v8/gypfiles/")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.target/deps/openssl")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.target/deps/uv")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.target/deps/zlib")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.target/tools/icu")
        self.copy("libnode.a",dst="lib",src="node/out/Release/obj.target/")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.host/deps/v8/gypfiles/")
        self.copy("*.a",dst="lib",src="node/out/Release/obj.host/tools/icu/")
        self.copy("*.h",dst="include",src="node/out")
        self.copy("*.h",dst="include",src="node/deps/v8/include/")
        self.copy("*.h",dst="include",src="node/src")

    def package_info(self):
        self.cpp_info.libs=['cares', 'gtest',
                'v8_nosnapshot', 'v8_libsampler',
                'v8_libbase', 'v8_initializers', 'v8_init',
                'v8_libplatform', 'v8_base', 'openssl',
                'uv', 'zlib', 'nghttp2', 'icuucx', 'icudata',
                'icustubdata', 'icui18n', 'node', 'icutools']
