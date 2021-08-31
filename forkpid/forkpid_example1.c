/* This is same as the previous program showing process ID and parent process ID.
 *
 * Author : Abinash
 */

#include<stdio.h>
#include<unistd.h>

int main(void)
{
	printf("I am process %ld\n",(long)getpid());
	printf("My parent id is %ld\n",(long)getppid()); 
	return 0;
}
