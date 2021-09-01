/* This is another example of wait()
 * Initially fork() > 0, so first "Hello from parent" is printed and fork() becomes zero and 
 * "Hello from child" is printed.
 * wait(NULL) will block parent process until any of its children has finished. 
 * If child terminates before parent process reaches wait(NULL) then 
 * the child process turns to a zombie process until its parent waits on it and its released from memory.
 * 
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */

#include<stdio.h>	/* required for printf */
#include<sys/wait.h>	/* required for wait */
#include<unistd.h>	/* required for fork */

/*main program */

int main()
{
	if(fork()==0)	/* child process */	
		printf("Hello from child\n");

	else		/* parent process */
	{
		printf("hello from parent\n");
		wait(NULL);	/* block parent process until any of its children has finished. */
		printf("child has terminated\n");
	}
	printf("Bye\n");
	return 0;	/* program exited successfully */
}
