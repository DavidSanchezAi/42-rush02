/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:11:41 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/10 19:21:45 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		continue ;
	return (i);
}

int is_str_equal(char *str1, char *str2)
{
	int i;
	
	if (ft_strlen(str1) != ft_strlen(str2))
		return (1);
	i = -1;
	while (str1[++i] != '\0')
		if (str1[i] != str2[i])
			return (1);
	return(0);
}
