/* This program shows, a file is opened and read when it is in child process in the fork() system call..
 *
 * Author : Abinash
 */ 

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
	pid_t pid;
	int fd = 0;
	char buff[256];
	fd = open("test",O_RDONLY);	//test file in opened in READ Mode
	
	pid = fork();
	if(pid < 0)
		printf("Failed to fork..\n");
	else if(pid == 0)	// Test file is opened in child process and the data is printed from test file
	{
		printf("Child process...\n");
		read(fd,buff,sizeof(buff));
		printf("Data = %s",buff);
	}
	else if(pid > 0)
		printf("Parent process...\n");
	sleep(2);
	return 0;
}
