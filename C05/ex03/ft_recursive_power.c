/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:03:33 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/25 10:11:02 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else
	{
		return (ft_recursive_power(nb, power - 1) * nb);
	}
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
			res = ft_recursive_power(nb, power);
			printf("%d^%d = %d\n", nb, power, res);
			power++;
		}
		nb++;
	}
	return (0);
}*/
