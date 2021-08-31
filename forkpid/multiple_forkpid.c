/* This program explains about the process ID for the multiple fork system call.
 *
 * Author : Abinash
 */

#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("Hi..\n");
	fork();
	fork();
	fork();
	printf("PID : %d  PPID : %d\n",getpid(),getppid());
	while(1);
}
