#include <unistd.h>
int is_str_equal(char *str1, char *str2, int ntry)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (str1[++i])
		if (str1[i] != str2[i])
			return (1);
	if (ntry != 1)
		is_str_equal(str2, str1, 1);
	return(0);
}

void	ft_check_num(char *buf, char *inpt_num)
{
	char	*number;
	int		i;
	int		j;
	int		unvalid;

	i = 0;
	unvalid = 0;
	j=0;
	while (buf[i] != '\0')
	{
		j++;
		if (buf[i] == '\n')
		{
			j = 0;
			unvalid = 0;
		}
		else if (buf[i] == ':')
		{
			if (is_str_equal(number, inpt_num, 0) == 0)
			{
				while (buf[++i] != '\n')
					write(1, &buf[i], 1);
				write(1, " ", 1);
				break ;
			}
			unvalid = 1;
		}
		else
			if (unvalid == 0)
				number[j] = buf[i];
	}
}

int main(void)
{
	ft_check_num("10: a\n 100: b\n 1000:c", "1000");
}
