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
 * Author : Abinash
 */

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

void waitexample()
{
	int stat;

	// This status 1 is reported by WEXITSTATUS
	if(fork()==0)
		exit(1);	/* EXIT_FAILURE */
	else
		wait(&stat);
	if(WIFEXITED(stat))
		printf("Exit status: %d\n",WEXITSTATUS(stat));
	else if(WIFSIGNALED(stat))
		psignal(WTERMSIG(stat),"Exit signal");
}

int main()
{
	waitexample();
	return 0;
}
