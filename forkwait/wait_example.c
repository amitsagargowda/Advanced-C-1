/* This program explains about the working of wait() function..
 * wait(NULL) will block parent process until any of its children has finished.                                          * If child terminates before parent process reaches wait(NULL) then                                                     * the child process turns to a zombie process until its parent waits on it and its released from memory.
 *
 * Author : Abinash
 */

#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
 
int main()
{
	pid_t cpid;
	if (fork()== 0)
		exit(0);           /* terminate child */
	else
		cpid = wait(NULL); /* reaping parent */
	printf("Parent pid = %d\n", getpid());
	printf("Child pid = %d\n", cpid);
        return 0;
}
