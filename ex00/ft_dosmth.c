int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		continue ;
	return (i);
}

int	ft_dosmth	(char *cad)
{
	char	*num;
	int		i;

	i = 0;
	num[0] = (cad[0] + 48);
	while (cad[++i] != '\0')
		num[i] = cad[i];
	num[i] = '\0';
	//ft_search(num);
	if (ft_strlen != 0)
		ft_dosmth(cad);
}
