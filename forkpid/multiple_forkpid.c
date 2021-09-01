/* This program explains about the process ID for the multiple fork system call.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<unistd.h>	/* required for fork() */
#include<sys/types.h>	/* required for fork() */

/*main program */

int main()
{
	printf("Hi..\n");
	fork();		/* here fork() is declared 3 times. According to 2^n = 2^3 = 8 */
	fork();		/* fork() creates child process for every parent process */
	fork();

	/* getpid function returns the process ID of the current process.
	 * getppid function returns the process ID of the parent of the current process.
	 */

	printf("PID : %d  PPID : %d\n",getpid(),getppid());
	while(1);
}
