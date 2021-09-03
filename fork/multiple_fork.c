/* This program shows how many times the "Hello" is printed
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<sys/types.h>	/* required for fork() */
#include<unistd.h>	/* required for fork() */

/* main program */

int main()
{
	/* For every fork process a child process is created by parent process.
	 * Execution of fork() can be found using the formula "2^n".
	 * In this case, there are 3 fork() system calls so 2^3 = 8 times "Hello" is printed.
	 */
	fork();		/* fork() system call is declared 3 times */
	fork();
	fork();
	printf("Hello\n");	/* Hello is printed 8 times */
	return 0;		/* return 0 means program executed successfully */
}
