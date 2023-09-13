/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:40:50 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/30 10:59:37 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	nb;
	int	i;
	int	size;

	size = (max - min);
	res = (int *)malloc(size * sizeof(int));
	if (min > max)
	{
		res = NULL;
	}
	else
	{
		nb = min;
		i = 0;
		while (nb < max)
		{
			res[i] = nb;
			i++;
			nb++;
		}
	}
	return (res);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*res;
	int	i;

	min = 3;
	max = 9;
	i = 0;
	res = ft_range(min, max);
	while (res[i])
	{
		printf("%d", res[i]);
		i++;
	}
	return (0);
}*/
