/* This is the sample program of the fork().
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<sys/types.h>	/* required for fork */
#include<unistd.h>	/* required for fork */

/* main program */

int main()
{

	fork();			/* Creates child process by duplicating the parent process */
	printf("Hello\n");	/* Hello is printed in the child process as well as the parent process */
	return 0;		/* return 0 means program executed successfully */
}
