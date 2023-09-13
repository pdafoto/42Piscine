/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:56:40 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/23 09:39:34 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	while (s1[i] && s2[i] && i < n && result == 0)
	{
		result = s1[i] - s2[i];
		i++;
	}
	if ((s1[i] == '\0' || s2[i] == '\0') && i < n && result == 0)
		result = s1[i] - s2[i];
	return (result);
}
/*
int	main(void)
{
	char			s1[] = "Hola, Marvin!";
	char			s2[] = "Hola, Arthur!";
	int				result;
	unsigned int	n;

	n = 5;
	result = ft_strncmp(s1, s2, n);
	printf("result = %d\n", result);
	return (0);
}*/
