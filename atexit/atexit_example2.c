/* This program is same as that of atexit_example.c
 * The only difference is here we have used static keyword which returns nothing 
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include <stdio.h>	/* required for printf */
#include <stdlib.h>	/* required ofr atexit */

static void my_exit1(void);	/* my_exit1 function declaration */
static void my_exit2(void);	/* my_exit2 function declaration */

/* main program */

int main(void)
{
	if (atexit(my_exit2) != 0)	/* exit2 handler */
		printf("can’t register my_exit2");

	if (atexit(my_exit1) != 0)	/* exit1 handler */
		printf("can’t register my_exit1");

	printf("main is done\n");
	
	return(0);	/* program exited successfully */
}

/* prints first exit statement
 * 
 * @param[in]
 * @param[out] printf
 */

static void my_exit1(void)
{
	printf("first exit handler\n");
}

/* prints second exit statement    
 *
 * @param[in]
 * @param[out] printf
 */

static void my_exit2(void)
{
	printf("second exit handler\n");
}
