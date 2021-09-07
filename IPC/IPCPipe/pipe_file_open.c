/* This program describes about the communication between the process.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 07.09.2021
 * Author : Abinash
 */ 

#include <stdio.h>	/* required for fprintf */
#include <unistd.h>

/* main program */
int main()
{
	FILE* stream=popen("cat","w");
	fprintf(stream,"Hi!\n");	/* fprintf write data to the stream associated with write end of pipe */
	fflush(stream);			/* immediately writes the data to the pipe */
	sleep(10);			/* sleep for 10 seconds */
	fprintf(stream,"Just testing :D\n");	/* writes to the stream */
	fflush(stream);
	pclose(stream);	/* closing the stream */
	fprintf(stdout,"Finished!\n");
	return 0;
}
