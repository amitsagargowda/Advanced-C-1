/*
 * This is the sample program of the fork().
 * Author : Abinash
 */

#include<stdio.h>
#include<sys/types.h>      
#include<unistd.h>

int main()
{
	/* fork()  creates a new process by duplicating the calling process.  
	 * The new process is referred to as the child process.  
	 * The calling process is referred to as the parent process.
	 * On success, the PID of the child process is returned in the parent, and 0 is returned in the child.  
	 * On failure, -1 is returned in the parent, no child process is created, and errno is set appropriately.
	 */

	fork();	
	printf("Hello\n");	//Hello is printed in the child process as well as the parent process.
	return 0;
}
