/*This program shows about the multiple atexit handlers
 *
 * Author : Abinash
 */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void out1(void) 		     /* programmer defined exit handler 1 */
{
	printf("In out1...\n");
}

void out2(void)                      /* programmer defined exit handler 2 */
{
	printf("in out2...\n");
}

int main()
{
	atexit(out1);              /* registering out1 exit handler */
	atexit(out2);              /* registering out2 exit handler */
	sleep(10);
					
}
