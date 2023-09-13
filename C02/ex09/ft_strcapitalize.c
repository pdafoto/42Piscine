/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 09:20:22 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/18 09:52:17 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		if (str[l] > 64 && str[l] < 91)
			str[l] = str[l] + 32;
		l++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	ft_strlowcase(str);
	c = 0;
	while (str[c])
	{
		if (str[c] > 96 && str[c] < 123 && str[c -1] < 48)
			str[c] = str[c] - 32;
		if (str[c] > 96 && str[c] < 123 && (str[c -1] > 57 && str[c -1] < 65))
			str[c] = str[c] - 32;
		if (str[c] > 96 && str[c] < 123 && (str[c -1] > 90 && str[c -1] < 97))
			str[c] = str[c] - 32;
		if (str[c] > 96 && str[c] < 123 && str[c -1] > 122)
			str[c] = str[c] - 32;
		c++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = {"salut, commEnt tu vas ? 42mots quarante-deux; cinquante+et+un"};

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}*/
