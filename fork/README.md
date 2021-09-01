1. sample_fork.c
	
<td><a href="https://github.com/abinashprabakar/Advanced-C/blob/main/fork/sample_fork.c"> code </a></td>

In this program, a basic operation of fork() is explained. Fork() creates a new process by duplicating 
the calling process. The new process is referred to as the Child process. The calling process is referred to
as the parent process. On success, the PID of the child process is returned in the parent, and 0 is returned
in the child. On failure, -1 is returned in the parent, no child process is created, and errno is set appropriately.


2. multiple_fork.c	<td><a href="https://github.com/abinashprabakar/Advanced-C/blob/main/fork/multiple_fork.c"> code </a></td>

In this program, it is explained about how many times a fork() system call is called. To know how many times a fork()
is called we can find by mathematical formula **2^n**. Here there are 3 fork() system calls, so 2^n = 2^3 = 8 times the printf statement is executed.


3. fork_child_parent.c	<td><a href="https://github.com/abinashprabakar/Advanced-C/blob/main/fork/fork_child_parent.c"> code </a></td>

In this program, it is explained that how fork() system call is executed in parent and child process. When fork() == 0, it is in child process and when fork() > 0, it is in parent process. 


4. fork_file.c	<td><a href="https://github.com/abinashprabakar/Advanced-C/blob/main/fork/fork_file.c"> code </a></td>

In this program, it is shown that how a file is opened and read in fork() system call. Here the text file is opened in
child process when fork() == 0.


5. fork_pid.c	<td><a href="https://github.com/abinashprabakar/Advanced-C/blob/main/fork/fork_pid.c"> code </a></td>

In this program, it is explained that how is the process identification(pid) is found and executed.Fork returns the pid of the child process in the parent, and returns 0 in the child. If creation of a process was unsuccessful then it 
returns -1.  
