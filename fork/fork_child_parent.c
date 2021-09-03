/* This program shows how the fork() system call is executed in child and parent process.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<sys/types.h>   /* required for fork() */
#include<unistd.h>	/* required for fork() */

/* Prints parent and child process
 *
 * @param[in] fork
 * @param[out] prints parent, child 
 */

void fork_example()	/* function definition  */
{
	/* Child process because return value zero */
	if(fork()==0)
		printf("From Child\n");

	/* Parent process because return value non-zero */
	else
		printf("From parent\n");
}

/* main program */

int main()
{
	fork_example();	/* function call */
	return 0;	/* return 0 means program executed sucessfully */
}
