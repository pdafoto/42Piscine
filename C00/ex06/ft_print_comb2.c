/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:17:44 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/11 10:43:38 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int	primero;
	int	segundo;

	primero = 0;
	while (primero <= 99)
	{
		segundo = primero + 1;
		while (segundo <= 99)
		{
			write (1, &(char){primero / 10 + '0'}, 1);
			write (1, &(char){primero % 10 + '0'}, 1);
			write (1, " ", 1);
			write (1, &(char){segundo / 10 + '0'}, 1);
			write (1, &(char){segundo % 10 + '0'}, 1);
			if (primero != 98)
				write (1, ", ", 2);
			segundo++;
		}
		primero++;
	}
}
