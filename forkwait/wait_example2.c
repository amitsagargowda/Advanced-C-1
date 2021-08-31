/* This is another example of wait()
 * Initially fork() > 0, so first "Hello from parent" is printed and fork() becomes zero and 
 * "Hello from child" is printed.
 * wait(NULL) will block parent process until any of its children has finished. 
 * If child terminates before parent process reaches wait(NULL) then 
 * the child process turns to a zombie process until its parent waits on it and its released from memory.
 * 
 * Author : Abinash
 */

#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	if(fork()==0)
		printf("Hello from child\n");
	else
	{
		printf("hello from parent\n");
		wait(NULL);
		printf("child has terminated\n");
	}
	printf("Bye\n");
	return 0;
}
