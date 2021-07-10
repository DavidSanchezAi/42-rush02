#include <stdio.h>


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

int main(void)
{
	int n;

	n = 0;
	n = is_str_equal("hola", "hola_", 0);
	printf("%d", n);
}
