/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:23:36 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/25 09:44:01 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}
/*
int	main(void)
{
	int i;
	int res;

	i = 0;
	while (i < 14)
	{
		res = ft_recursive_factorial(i);
		printf("%d! = %d\n", i, res);
		i++;
	}
	return (0);
}*/
