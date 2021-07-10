#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
int main(void)
{
	char buf[30];
	size_t nbytes;
	ssize_t bytes_read;
	int fd = open("foo.txt", O_RDONLY);;
	int i;

	nbytes = sizeof(buf);
	bytes_read = read(fd, buf, nbytes);

	i = -1;
	while (++i != sizeof(buf))
		write(1, &buf[i], 1);
}
