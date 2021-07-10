#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
//
#include <stdio.h>

long int findSize(char file_name[])
{
    // opening the file in read mode
	FILE* fp = fopen(file_name, "r");
  
    // checking if the file exist or not
	if (fp == NULL) {
		printf("File Not Found!\n");
		return -1;
    }
  
	fseek(fp, 0L, SEEK_END);

	// calculating the size of the file
	long int res = ftell(fp);

	// closing the file
	fclose(fp);
  
	return res;
}


int main(void)
{
	size_t nbytes;
	ssize_t bytes_read;
	int fd = open("foo.txt", O_RDONLY);;
	int i;
	char buf[findSize("foo.txt")];
	
	nbytes = sizeof(buf);
	bytes_read = read(fd, buf, nbytes);

	i = -1;
	while (++i != sizeof(buf))
		write(1, &buf[i], 1);
}
