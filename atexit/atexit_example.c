/* This program shows the basic operation of atexit()
 * atexit - register a function to be called at normal process termination
 * The atexit() function returns the value 0 if successful, otherwise it returns a nonzero value.
 * 
 * Author : Abinash
 * */

#include <stdio.h> 
#include <stdlib.h> 
 
void out (void) 	/*programmer defined exit handler. It is called when program terminated normally.*/
{ 
	printf ("atexit( ) succeeded!\n"); 
} 
 
int main (void) 
{ 
	if (atexit(out))	/* Registering the exit handler using atexit(). */ 
		fprintf(stderr, "atexit( ) failed!\n"); 
	
	return 0; 
} 
