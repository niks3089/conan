#pragma once

#define __includeos(num, ...) extern long syscall_##num(long,...)

#if !defined(SYS_fork)
  #define SYS_fork
#endif

extern long syscall_n(long,...);
extern long syscall_SYS_brk(void*);
extern long syscall_SYS_close(long,...);
extern long syscall_SYS_epoll_wait(long,...);
extern long syscall_SYS_exit_group(long,...);
extern long syscall_SYS_exit(long,...);
extern long syscall_SYS_fadvise(long,...);
extern long syscall_SYS_fallocate(long,...);
extern long syscall_SYS_fcntl(long,...);
extern long syscall_SYS_flistxattr(long,...);
extern long syscall_SYS_fork();
extern long syscall_SYS_fremovexattr(long,...);
extern long syscall_SYS_fsetxattr(long,...);
extern long syscall_SYS_futex(long, ...);
extern long syscall_SYS_getdents(long,...);
extern long syscall_SYS_getegid();
extern long syscall_SYS_geteuid();
extern long syscall_SYS_getgid();
extern long syscall_SYS_getpid();
extern long syscall_SYS_getppid();
extern long syscall_SYS_gettid();
extern long syscall_SYS_getuid();
extern long syscall_SYS_inotify_init();
extern long syscall_SYS_ioctl(long, long, long, ...);
extern long syscall_SYS_lremovexattr(long,...);
extern long syscall_SYS_mmap2(long,...);
extern long syscall_SYS_msgctl(long,...);
extern long syscall_SYS_msgget(long,...);
extern long syscall_SYS_munlockall();
extern long syscall_SYS_pause();
extern long syscall_SYS_poll(long,...);
extern long syscall_SYS_removexattr(long,...);
extern long syscall_SYS_rt_sigqueueinfo(long, ...);
extern long syscall_SYS_sched_getaffinity(long, ...);
extern long syscall_SYS_sched_yield();
extern long syscall_SYS_semctl(long,...);
extern long syscall_SYS_semget(long,...);
extern long syscall_SYS_semop(long,...);
extern long syscall_SYS_semtimedop(long,...);
extern long syscall_SYS_setsid();
extern long syscall_SYS_set_tid_address(long,...);
extern long syscall_SYS_shmat(long,...);
extern long syscall_SYS_sync();
extern long syscall_SYS_vhangup();
extern int syscall_SYS_open(const char *path, int oflag, ... );

__includeos(SYS_access);
__includeos(SYS_acct);
__includeos(SYS_adjtimex);
__includeos(SYS_arch_prctl);
__includeos(SYS_capget);
__includeos(SYS_capset);
__includeos(SYS_chdir);
__includeos(SYS_chmod);
__includeos(SYS_chown);
__includeos(SYS_chroot);
__includeos(SYS_clock_adjtime);
__includeos(SYS_clock_getres);
__includeos(SYS_clock_gettime);
__includeos(SYS_clock_nanosleep);
__includeos(SYS_clock_settime);
__includeos(SYS_delete_module);
__includeos(SYS_dup);
__includeos(SYS_dup2);
__includeos(SYS_dup3);
__includeos(SYS_epoll_create);
__includeos(SYS_epoll_create1);
__includeos(SYS_epoll_ctl);
__includeos(SYS_epoll_pwait);
__includeos(SYS_eventfd);
__includeos(SYS_eventfd2);
__includeos(SYS_execve);
__includeos(SYS_faccessat);
__includeos(SYS_fanotify_init);
__includeos(SYS_fanotify_mark);
__includeos(SYS_fchdir);
__includeos(SYS_fchmod);
__includeos(SYS_fchmodat);
__includeos(SYS_fchown);
__includeos(SYS_fchownat);
__includeos(SYS_fdatasync);
__includeos(SYS_fgetxattr);
__includeos(SYS_flock);
__includeos(SYS_fstat);
__includeos(SYS_fstatat);
__includeos(SYS_fstatfs);
__includeos(SYS_fstatfs64);
__includeos(SYS_fsync);
__includeos(SYS_ftruncate);
__includeos(SYS_futimesat);
__includeos(SYS_getcpu);
__includeos(SYS_getcwd);
__includeos(SYS_getgroups);
__includeos(SYS_getitimer);
__includeos(SYS_getpgid);
__includeos(SYS_getpriority);
__includeos(SYS_getresgid);
__includeos(SYS_getresuid);
__includeos(SYS_getrlimit);
__includeos(SYS_getrusage);
__includeos(SYS_getsid);
__includeos(SYS_gettimeofday);
__includeos(SYS_getxattr);
__includeos(SYS_init_module);
__includeos(SYS_inotify_add_watch);
__includeos(SYS_inotify_init1);
__includeos(SYS_inotify_rm_watch);
__includeos(SYS_ioperm);
__includeos(SYS_iopl);
__includeos(SYS_ipc);
__includeos(SYS_kill);
__includeos(SYS_lchown);
__includeos(SYS_lgetxattr);
__includeos(SYS_link);
__includeos(SYS_link175);
__includeos(SYS_linkat);
__includeos(SYS_listxattr);
__includeos(SYS_llistxattr);
__includeos(SYS__llseek);
__includeos(SYS_lseek);
__includeos(SYS_lsetxattr);
__includeos(SYS_lstat);
__includeos(SYS_madvise);
__includeos(SYS_mincore);
__includeos(SYS_mkdir);
__includeos(SYS_mkdirat);
__includeos(SYS_mknod);
__includeos(SYS_mknodat);
__includeos(SYS_mlock);
__includeos(SYS_mlockall);
__includeos(SYS_mmap);
__includeos(SYS_mount);
__includeos(SYS_mprotect);
__includeos(SYS_mq_getsetattr);
__includeos(SYS_mq_notify);
__includeos(SYS_mq_open);
__includeos(SYS_mq_timedreceive);
__includeos(SYS_mq_timedsend);
__includeos(SYS_mq_unlink);
__includeos(SYS_mremap);
__includeos(SYS_msgrcv);
__includeos(SYS_msgsnd);
__includeos(SYS_msync);
__includeos(SYS_munlock);
__includeos(SYS_munmap);
__includeos(SYS_nanosleep);
__includeos(SYS_nice);
__includeos(SYS_openat);
__includeos(SYS_personality);
__includeos(SYS_pipe);
__includeos(SYS_pipe2);
__includeos(SYS_pivot_root);
__includeos(SYS_ppoll);
__includeos(SYS_prctl);
__includeos(SYS_pread);
__includeos(SYS_preadv);
__includeos(SYS_prlimit64);
__includeos(SYS_process_vm_readv);
__includeos(SYS_process_vm_writev);
__includeos(SYS_pselect6);
__includeos(SYS_ptrace);
__includeos(SYS_pwrite);
__includeos(SYS_pwritev);
__includeos(SYS_quotactl);
__includeos(SYS_read);
__includeos(SYS_readahead);
__includeos(SYS_readlink);
__includeos(SYS_readlinkat);
__includeos(SYS_readv);
__includeos(SYS_reboot);
__includeos(SYS_remap_file_pages);
__includeos(SYS_rename);
__includeos(SYS_renameat);
__includeos(SYS_rmdir);
__includeos(SYS_rt_sigaction);
__includeos(SYS_rt_sigpending);
__includeos(SYS_rt_sigprocmask);
__includeos(SYS_rt_sigsuspend);
__includeos(SYS_rt_sigtimedwait);
__includeos(SYS_sched_getparam);
__includeos(SYS_sched_get_priority_max);
__includeos(SYS_sched_get_priority_min);
__includeos(SYS_sched_getscheduler);
__includeos(SYS_sched_rr_get_interval);
__includeos(SYS_sched_setaffinity);
__includeos(SYS_sched_setparam);
__includeos(SYS_sched_setscheduler);
__includeos(SYS_select);
__includeos(SYS_sendfile);
__includeos(SYS_setdomainname);
__includeos(SYS_setfsgid);
__includeos(SYS_setfsuid);
__includeos(SYS_setgid);
__includeos(SYS_setgroups);
__includeos(SYS_sethostname);
__includeos(SYS_setitimer);
__includeos(SYS_setns);
__includeos(SYS_setpgid);
__includeos(SYS_setpriority);
__includeos(SYS_setregid);
__includeos(SYS_setreuid);
__includeos(SYS_setrlimit);
__includeos(SYS_set_robust_list);
__includeos(SYS_settimeofday);
__includeos(SYS_setuid);
__includeos(SYS_setxattr);
__includeos(SYS_shmctl);
__includeos(SYS_shmdt);
__includeos(SYS_shmget);
__includeos(SYS_sigaltstack);
__includeos(SYS_signalfd);
__includeos(SYS_signalfd4);
__includeos(SYS_socketcall);
__includeos(SYS_splice);
__includeos(SYS_stat);
__includeos(SYS_statfs);
__includeos(SYS_statfs64);
__includeos(SYS_swapoff);
__includeos(SYS_swapon);
__includeos(SYS_symlink);
__includeos(SYS_symlinkat);
__includeos(SYS_sync_file_range);
__includeos(SYS_syncfs);
__includeos(SYS_sysinfo);
__includeos(SYS_syslog);
__includeos(SYS_tee);
__includeos(SYS_tgkill);
__includeos(SYS_timer_create);
__includeos(SYS_timer_delete);
__includeos(SYS_timerfd_create);
__includeos(SYS_timerfd_gettime);
__includeos(SYS_timerfd_settime);
__includeos(SYS_timer_getoverrun);
__includeos(SYS_timer_gettime);
__includeos(SYS_timer_settime);
__includeos(SYS_times);
__includeos(SYS_tkill);
__includeos(SYS_truncate);
__includeos(SYS_umask);
__includeos(SYS_umount2);
__includeos(SYS_uname);
__includeos(SYS_unlink);
__includeos(SYS_unlinkat);
__includeos(SYS_unshare);
__includeos(SYS_utimensat);
__includeos(SYS_utimes);
__includeos(SYS_vmsplice);
__includeos(SYS_wait4);
__includeos(SYS_waitid);
__includeos(SYS_write);
__includeos(SYS_writev);

int socketcall_socket(int,...);
int socketcall_bind(int,...);
int socketcall_connect(int,...);
int socketcall_listen(int,...);
int socketcall_accept(int,...);
int socketcall_getsockname(int,...);
int socketcall_getpeername(int,...);
int socketcall_socketpair(int,...);
int socketcall_send(int,...);
int socketcall_recv(int,...);
int socketcall_sendto(int,...);
int socketcall_recvfrom(int,...);
int socketcall_shutdown(int,...);
int socketcall_setsockopt(int,...);
int socketcall_getsockopt(int,...);
int socketcall_sendmsg(int,...);
int socketcall_recvmsg(int,...);
int socketcall_accept4(int,...);
int socketcall_recvmmsg(int,...);
int syscall_SYS_recvmmsg(int,...);
int syscall_SYS_sendmmsg(int,...);
//int socketcall_sendmmsg(int,...);
