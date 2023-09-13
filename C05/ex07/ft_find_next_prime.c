/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@studen.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:57:05 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/27 10:05:48 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (!(nb % i))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = 0;
	while (prime == 0)
	{
		prime = ft_is_prime(nb);
		if (prime == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;
	int	prime;

	nb = 0;
	while (nb < 43)
	{
		prime = ft_find_next_prime(nb);
		printf("The first prime greater or equal than %d is %d\n", nb, prime);
		nb++;
	}
	return (0);
}*/
