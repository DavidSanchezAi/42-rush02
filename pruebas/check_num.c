#include <unistd.h>
#include <stdio.h>

int		is_str_equal(char *str1, char *str2);

void	ft_check_num(char *buf, char *inpt_num)
{
	char	number[9]={1,2};
	int		i;
	int		j;
	int		unvalid;

	i = -1;
	unvalid = 0;
	j = 0;
	while (buf[++i] != '\0')
	{
		j++;
		if (buf[i] == '\n')
		{
			j = 0;
			unvalid = 0;
		}
		else if (buf[i] == ':')
		{
			printf("%s", number);
			if (is_str_equal(number, inpt_num) == 0)
			{

				while (buf[++i] != '\n')
					write(1, &buf[i], 1);
				write(1, " ", 1);
				break ;
			}
			else
				write(1, "F", 1);
			unvalid = 1;
		}
		else
			if (unvalid == 0 && buf[i] > 47 && buf[i<58])
				number[j] = buf[i];
	}
}

int main(void)
{
	ft_check_num("10:hola\n 100:b\n 1000:c", "100");
	return(0);
}
