/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:50:10 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/22 17:52:02 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	posneg;
	int	nb;

	i = 0;
	posneg = 1;
	nb = 0;
	if (str[i])
	{
		while (((str[i] > 8) && (str[i] < 14)) || (str[i] == ' '))
			i++;
		while ((str[i] == '-') || (str[i] == '+'))
		{
			if (str[i] == '-')
				posneg = posneg * -1;
			i++;
		}
		while ((str[i] > '/') && (str[i] < ':'))
		{
			nb = (nb * 10) + (str[i] - 48);
			i++;
		}
	}
	nb = nb * posneg;
	return (nb);
}
/*
int	main(void)
{
	char	str[] = {" ---+--+1234ab567"};
	int		nb;

	printf("%s\n", str);
	nb = ft_atoi(str);
	printf("%d", nb);
	return (0);
}*/
