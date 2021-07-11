#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
//
#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 1)
	{
		size_t nbytes;
		ssize_t bytes_read;
		int fd = open("english.dict", O_RDONLY);;
		int i;
		char buf[60000];
	
		nbytes = sizeof(buf);
		bytes_read = read(fd, buf, nbytes);
		i = 0;
		while (i != sizeof(buf) && buf[i])
		{
			if (buf[i] == argv[1][0])
			{
				i++;
				if (buf[i] == ':')
					while (buf[++i] != '\n')
						write(1, &buf[i], 1);
				return (0);
			}
			else
				i ++;
		}
	}
	printf("suspendimos");
	return (0);
}
