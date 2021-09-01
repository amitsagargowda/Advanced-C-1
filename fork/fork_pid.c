/* This program shows how is the process identification (pid) is executed.
 * Fork returns the pid of the child process in the parent, and returns 0 in the child. 
 * If creation of a process was unsuccessful then it returns -1.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<unistd.h>	/* required for fork() */
#include<sys/types.h>	/* required for fork() */

/* main program */ 

int main()
{
	pid_t pid;	/* The pid_t data type is a signed integer type which is capable of representing a process ID */
	pid = fork(); 	/* fork is assigned to pid */
	
	if(pid < 0)
		printf("Failed to fork...\n");
	else if(pid == 0)
		printf("Child process...\n");
	else if(pid > 0)
		printf("Parent process...\n");
	sleep(2);
	return 0;	/* program executed successfully */
}
