/* This program explains about the working of wait() function..
 * wait(NULL) will block parent process until any of its children has finished.    
 * If child terminates before parent process reaches wait(NULL) then the child process turns to a zombie process 
 * until its parent waits on it and its released from memory.
 *	
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<stdlib.h>	/* required for exit */
#include<sys/wait.h>	/* required for wait */	
#include<unistd.h>	/* required for fork */
 
/* main program */ 

int main()
{
	pid_t cpid;	/* signed integer type which is capable of representing a process ID */
	if (fork()== 0)
		exit(0);          	 /* terminate child */
	else
		cpid = wait(NULL);	 /* reaping parent */

	printf("Parent pid = %d\n", getpid());	/* getpid -> returns the process ID of the calling process */
	printf("Child pid = %d\n", cpid);	/* prints child PID */	

        return 0;				/* return 0 -> program executed successfully */
}
