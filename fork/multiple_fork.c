/* This program shows how many times the "Hello" is printed
 *
 * Author : Abinash
 */

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	/* For every fork process a child process is created by parent process.
	 * Execution of fork() can be found using the formula "2^n".
	 * In this case, there are 3 fork() system calls so 2^3 = 8 times "Hello" is printed.
	 */
	fork();
	fork();
	fork();
	printf("Hello\n");
	return 0;
}
