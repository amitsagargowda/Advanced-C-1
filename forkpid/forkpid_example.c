/*  This program explains about getpid() and getppid()
 *
 *  getpid, getppid - get process identification 
 *  getpid() returns the process ID of the calling process.
 *  getppid() returns the process ID of the parent of the calling process.
 *
 *  Author : Abinash
 */

#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	
	if(pid < 0)
		printf("Failed to work...\n");
	else if(pid == 0)
		printf("Child process...\n",getpid());
	else if(pid > 0)
		printf("Parent process...\n",getpid());
	sleep(2);
	return 0;
}
