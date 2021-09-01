1. wait_example.c - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/forkwait/wait_example.c">code</a>

		In this program, the working of wait() function call is explained. If fork becomes zero, 
		the child process in terminated wait(NULL) will block parent process until any of its children has finished. 


2. wait_example2.c - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/forkwait/wait_example2.c">code</a>

		This is another example of wait(), initially fork() > 0, so first "Hello from parent" is printed and fork() becomes
		zero and "Hello from child" is printed. wait(NULL) will block parent process until any of its children has finished. 
		If child terminates before parent process reaches wait(NULL) then the child process turns to a zombie process 
		until its parent waits on it and its released from memory. 


3. wait_macros.c - <a href = "https://github.com/abinashprabakar/Advanced-C/blob/main/forkwait/wait_macros.c">code</a>

		This program shows some of the macros of wait functions such as WIFEXITED, WTERMSIG, WEXITSTATUS, WIFSIGNALED etc.
		 **WIFEXITED(wstatus)**   - child exited normally.
		 **WEXITSTATUS(wstatus)** - return code when child exits.
		 **WIGSIGNALED(status)**  - child exited because a signal was not caught.
		 **WTERMSIG(status)**     - gives the number of the terminating signal.
		 **WIFSTOPPED(status)**   - child is stopped.
		 **WSTOPSIG(status)**     - gives the number of the stop signal.
