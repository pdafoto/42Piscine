/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@studen.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:46:03 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/25 10:01:27 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		res = nb * res;
		power--;
	}
	return (res);
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	res;

	nb = 0;
	while (nb < 10)
	{
		power = 0;
		while (power < 10)
		{
			res = ft_iterative_power(nb, power);
			printf("%d^%d = %d\n", nb, power, res);
			power++;
		}
		nb++;
	}
	return (0);
}*/
