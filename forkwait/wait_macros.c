/* This program shows some of the macros of wait functions 
 * such as WIFEXITED, WTERMSIG, WEXITSTATUS, WIFSIGNALED etc.
 *
 * WIFEXITED(wstatus)   - child exited normally.
 * WEXITSTATUS(wstatus) - return code when child exits.
 * WIGSIGNALED(status)  - child exited because a signal was not caught.
 * WTERMSIG(status)     - gives the number of the terminating signal.
 * WIFSTOPPED(status)   - child is stopped.
 * WSTOPSIG(status)     - gives the number of the stop signal.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<stdlib.h>	/* required for exit */
#include<sys/wait.h>	/* required for wait */
#include<unistd.h>	/* required for fork */

/* Exit status is identified and printed
 *
 * @param[in] 
 * @param[out] printf
 */

void waitexample()
{
	int stat;

	/* This status 1 is reported by WEXITSTATUS */
	if(fork()==0)
		exit(1);	/* EXIT_FAILURE */
	else
		wait(&stat);

	if(WIFEXITED(stat))	/* returns true if the child terminated normally */
		printf("Exit status: %d\n",WEXITSTATUS(stat));  /* returns the exit status of the child */

	else if(WIFSIGNALED(stat))
		psignal(WTERMSIG(stat),"Exit signal");
}

/* main program */

int main()
{
	waitexample(); /* wait function call */
	return 0;	/* program executed successfully */
}
