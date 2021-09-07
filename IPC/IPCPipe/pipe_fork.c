/* This program discribes the how to communicate between the processes.
 * 
 * Email : abinashprabakaran@gmail.com
 * Date : 07.09.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<unistd.h>	/* required for pipe, fork */
#include<string.h>	/* required for string operations */
#include<stdlib.h>	/* required for fork */
#include<errno.h>	/* required for perror */
#include<sys/wait.h>	

/* main program */
int main()
{
	int status;
	int fd[2];	/* integer array storing file descriptor value of pipe */
	int result = pipe(fd);  
	if(result != 0)	/* checking whether pipe is created */
	{
		perror("pipe create failed:");
		exit(0);
	}
	
	pid_t childid;	/* holding the process ID of the child */
	
	childid = fork(); /* creating the child process */
	if( childid == -1)
	{
		perror("Falied to fork:");
		exit(0);
	}
	if(childid == 0)
	{
		/* In Child process. */
		close(fd[1]);	/* closing the write end of the pipe */
		char buffer[50];
		
		read(fd[0],buffer,sizeof(buffer)); /* reading the data from the pipe */
 		printf("message from the parent: %s\n",buffer); /* printing the data read from the pipe */
		close(fd[0]); /*closing the read end of the pipe */
	}
	else
	{
		/* In parent process */
		close(fd[0]);	/* closing the read end of the pipe */
		char toWrite[] = "Hello from parent..";
		write(fd[1],toWrite,strlen(toWrite)+1);	/* writing to the pipe */ 

		pid_t cpid = waitpid(childid,&status,0);
		if(WIFEXITED(status))	/* WIFEXITED is true if the child terminated normally */  
		{
			printf("child %d terminated with status: %d\n",cpid,WEXITSTATUS(status)); 
		}
		close(fd[1]);	/* closing the write end of the pipe */
	}
	return 0;
}
