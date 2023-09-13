/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:12:20 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/23 10:06:56 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	s;
	unsigned int	f;

	s = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[s])
	{
		f = 0;
		while (str[s + f] == to_find[f])
		{
			if (to_find[f + 1] == '\0')
			{
				return (str + s);
			}
			f++;
		}
		s++;
	}
	return (0);
}
/*
int	main (void)
{
	char	str[] = "Hello, Marvin!";
	char	to_find[] = "Marvin";
	char	*found;

	found = ft_strstr(str, to_find);
	printf("%s", found);
	return (0);
}*/
