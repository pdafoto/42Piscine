/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 08:58:21 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/27 09:16:44 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt_recursive(int nb, int i)
{
	if (nb > 2147395600)
	{
		return (0);
	}
	if (i * i == nb)
	{
		return (i);
	}
	if (i * i < nb)
	{
		return (ft_sqrt_recursive(nb, i + 1));
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recursive(nb, 0));
}
/*
int	main(void)
{
	int	nb;
	int	res;

	nb = 2147395600;
	while (nb <= 2147395600)
	{
		res = ft_sqrt(nb);
		if (res != 0)
		{
			printf("√%d = %d\n", nb, res);
		}
		nb++;
	}
	return (0);
}*/
