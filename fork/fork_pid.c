/* This program shows how is the process identification (pid) is executed.
 * Fork returns the pid of the child process in the parent, and returns 0 in the child. 
 * If creation of a process was unsuccessful then it returns -1.
 *
 * Author : Abinash
 */

#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	
	if(pid < 0)
		printf("Failed to fork...\n");
	else if(pid == 0)
		printf("Child process...\n");
	else if(pid > 0)
		printf("Parent process...\n");
	sleep(2);
	return 0;
}
