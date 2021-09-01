/*  This program explains about getpid() and getppid()
 *
 *  getpid, getppid - get process identification 
 *  getpid() returns the process ID of the calling process.
 *  getppid() returns the process ID of the parent of the calling process.
 *
 *  Email : abinashprabakaran@gmail.com
 *  Date : 31.08.2021
 *  Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<unistd.h>	/* required for fork() */
#include<sys/types.h>	/* required for fork() */

/* main program */ 

int main()
{
	pid_t pid;	/* The pid_t data type is a signed integer type which is capable of representing a process ID */
	pid = fork();
	
	if(pid < 0)
		printf("Failed to work...\n");
	else if(pid == 0)
		printf("Child process...\n",getpid()); /* getpid() -> returns the process ID of the current process */
	else if(pid > 0)
		printf("Parent process...\n",getpid()); /* getppid() ->  returns the process ID of the parent of the current process */
	sleep(2);	/* sleep for 2 seconds */
	return 0;	/* return 0 -> program executed successfully */
}
