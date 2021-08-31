sample_fork()

In this program, a basic operation of fork() is explained. Fork() creates a new process by duplicating 
the calling process. The new process is referred to as the Child process. The calling process is referred to
as the parent process. On success, the PID of the child process is returned in the parent, and 0 is returned
in the child. On failure, -1 is returned in the parent, no child process is created, and errno is set appropriately.
