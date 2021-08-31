/* This program explains about how a basic file operation is executed.
 * In this program a file is opened in read | write mode and a string is copied to the existing file.
 *
 * Author : Abinash
 */


#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<errno.h>

int main()
{
	int fd, read_bytes;
	char buff[256];
	fd = open("test",O_RDWR);	//test file is opened in Read | Write mode
	if(fd < 0)
	{
		perror("Error opening file\n");	
		return 0;
	}
	printf("FD (%d)\n",fd);
	read_bytes = read(fd,buff,40);
	if(read_bytes < 0)
	{
		printf("Read error\n");
		close(fd);
		return 0;
	}
	printf("File contents\n");
	printf("%s\n",buff);
	strcpy(buff,"testing_write_system_call");	//new string is copied to buff

	read_bytes = write(fd,buff,40);			
	if(read_bytes < 0)
		printf("Write : %s\n",strerror(errno));
	close(fd);
}
