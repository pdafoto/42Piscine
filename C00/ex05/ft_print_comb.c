/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:34:18 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/11 10:43:59 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	centena;
	int	decena;
	int	unidad;

	centena = '0';
	while (centena < '8')
	{
		decena = centena + 1;
		while (decena < '9')
		{
			unidad = decena + 1;
			while (unidad <= '9')
			{
				write (1, &centena, 1);
				write (1, &decena, 1);
				write (1, &unidad, 1);
				unidad++;
				if (centena != '7')
					write (1, ", ", 2);
			}
			decena++;
		}
		centena++;
	}
}
