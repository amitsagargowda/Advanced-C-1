/* This is same as the previous program showing process ID and parent process ID.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */	
#include<unistd.h>	/* required for fork() */
#include<sys/types.h>	/* required for fork() */

/* main program */

int main(void)
{
	printf("I am process %ld\n",(long)getpid());	 /* getpid -> returns the process ID of the current process */

	printf("My parent id is %ld\n",(long)getppid()); /* getppid -> returns the process ID of the parent of the current process */
	
	return 0;					 /* return 0 -> program executed successfully */
}
