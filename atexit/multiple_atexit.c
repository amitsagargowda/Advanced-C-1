/*This program shows about the multiple atexit handlers
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<stdlib.h>	/* required for atexit */
#include<unistd.h>	/* required for sleep */

/* Prints In out1 statement
 *
 * @param[in]
 * @param[out] printf
 */

void out1(void) 		     /* programmer defined exit handler 1 */
{
	printf("In out1...\n");
}

/* Prints In out2 statement
 *
 * @param[in]
 * @param[out] printf
 *
 */
void out2(void)                      /* programmer defined exit handler 2 */
{
	printf("in out2...\n");
}

/* main program */
int main()
{
	atexit(out1);              /* registering out1 exit handler */
	atexit(out2);              /* registering out2 exit handler */
	sleep(10);		   /* sleep for 10 seconds */
					
}
