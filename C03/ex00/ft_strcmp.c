/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:41:35 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/21 09:56:05 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int		counter;
	int		result;

	counter = 0;
	result = 0;
	while ((s1[counter] != '\0' && s2[counter] != '\0') && result == 0)
	{
		result = s1[counter] - s2[counter];
		counter++;
	}
	if (result == 0)
		result = s1[counter] - s2[counter];
	return (result);
}
/*
int	main(void)
{
	char	s1[] = "Hola, Arthur!";
	char	s2[] = "Hola, Marvin!";
	int		result;

	result = ft_strcmp(s1, s2);
	printf("result = %d\n", result);
	return (0);
}*/
