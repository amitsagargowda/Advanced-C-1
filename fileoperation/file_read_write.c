/* This program explains about how a basic file operation is executed.
 * In this program a file is opened in read | write mode and a string is copied to the existing file.
 *
 * Email : abinashprabakaran@gmail.com
 * Date : 31.08.2021
 * Author : Abinash
 */


#include<stdio.h>	/* required for printf */
#include<fcntl.h>	/* manipulate file descriptor */
#include<string.h>	/* required for string functions */
#include<unistd.h>	/* required for write, read, close */
#include<errno.h>	/* required for strerror */

int main()
{
	int fd, read_bytes;
	char buff[256];
	fd = open("test",O_RDWR);	/* test file is opened in Read | Write mode */
	if(fd < 0)
	{
		perror("Error opening file\n");	
		return 0;
	}
	printf("FD (%d)\n",fd);	/* fd contents */
	read_bytes = read(fd,buff,40);	/* read up to count bytes from file descriptor into the buffer starting at buf */
	if(read_bytes < 0)
	{
		printf("Read error\n");
		close(fd);
		return 0;
	}
	printf("File contents\n");
	printf("%s\n",buff);	/* print file contents */
	strcpy(buff,"testing_write_system_call");	/* new string is copied to buff */

	/* writes up to count bytes from the buffer starting at buf to the file referred to by the file descriptor fd */
	read_bytes = write(fd,buff,40);
	if(read_bytes < 0)
		printf("Write : %s\n",strerror(errno)); /* strerror ->  returns the appropriate error or unkown error */
	close(fd);	/* close the file */
}
