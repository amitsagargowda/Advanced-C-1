/* This program shows how the fork() system call is executed in child and parent process.
 *
 * Author : Abinash
 */

#include<stdio.h>
#include<unistd.h>

void fork_example()
{
	// Child process because return value zero
	if(fork()==0)
		printf("From Child\n");

	// Parent process because return value non-zero
	else
		printf("From parent\n");
}
int main()
{
	fork_example();
	return 0;
}
