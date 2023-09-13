/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:04:21 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/31 10:10:07 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	nb;
	int	i;
	int	size;

	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	else
	{
		nb = min;
		i = 0;
		while (nb < max)
		{
			(*range)[i] = nb;
			i++;
			nb++;
		}
	}
	return (size);
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;
	int	size;

	min = 4;
	max = 9;
	i = 0;
	size = ft_ultimate_range(&range, min, max);
	while (range[i])
	{
		printf("%d", range[i]);
		i++;
	}
	printf("\n%d", size);
	return (0);
}
