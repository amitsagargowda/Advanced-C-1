/* This program shows the basic operation of atexit()
 * atexit - register a function to be called at normal process termination
 * The atexit() function returns the value 0 if successful, otherwise it returns a nonzero value.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021 
 * Author : Abinash
 * */

#include <stdio.h> 	/* required for printf, fprintf */
#include <stdlib.h>	/* required for atexit */
 
/* out function definition */

void out (void) 	/*programmer defined exit handler. It is called when program terminated normally.*/
{ 
	printf ("atexit( ) succeeded!\n"); 
} 

/* main program */
int main (void) 
{ 
	if (atexit(out))	/* Registering the exit handler using atexit(). */ 
		fprintf(stderr, "atexit( ) failed!\n"); 
	
	return 0; 	/* program exited successfully */
} 
