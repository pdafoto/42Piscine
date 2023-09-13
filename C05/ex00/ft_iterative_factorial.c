/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:49:24 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/25 09:30:15 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	res = 1;
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	int nb;
	int res;

	nb = 13;
	res = ft_iterative_factorial(nb);
	printf("%d! = %d", nb, res);
	return (0);
}*/
