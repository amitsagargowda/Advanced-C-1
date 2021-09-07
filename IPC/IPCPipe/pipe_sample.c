/* This program demonstrates the working of pipe() system call
 *
 * Email : abinashprabakaran@gmail.com	
 * Date : 07.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<errno.h>	/* required for perror */
#include<unistd.h>	/* required for pipe */	
#include<stdlib.h>	/* required for pipe */

int main()
{
	int fd[2];	/* integer array to hold the file descriptor values of pipe */
	int status;

	status = pipe(fd);
	if(status < 0) 	/* checking status to know pipe created */
	{
		perror("pipe failed");
		exit(-1);
	}
	else
	{
		printf("Pipe is created successfully...\n");
	}

	close(fd[0]);	/* closing the read end of the pipe */
	close(fd[1]);	/* closing the write end of the pipe */
	return 0;
}
