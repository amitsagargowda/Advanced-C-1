/* This program shows, a file is opened and read when it is in child process in the fork() system call.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */ 

#include<stdio.h>	/* required for printf */
#include<unistd.h>	/* required for fork() */
#include<sys/types.h>	/* required for fork() */
#include<fcntl.h>	/* required to manipulate file descriptor */

/* main program */

int main()
{
	pid_t pid;	/* pid_t data type is a signed integer type which is capable of representing a process ID */
	int fd = 0;
	char buff[256];
	fd = open("test",O_RDONLY);	/* test file in opened in READ Mode */
	
	pid = fork();			/* fork() is assigned to signed integer pid */
	if(pid < 0)
		printf("Failed to fork..\n");
	else if(pid == 0)		/* When pid == 0, file data is read  */
	{
		printf("Child process...\n");	/* child process is printed */
		read(fd,buff,sizeof(buff));	/* read from a file descriptor */
		printf("Data = %s",buff);	/* Data is printed from char buff */
	}
	else if(pid > 0)
		printf("Parent process...\n");	/* when pid > 0 ,parent process is executed */
	sleep(2);			/* sleep for 2 seconds */
	return 0;			/* return 0 means program executed successfully */
}
