/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:04:47 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/21 15:02:10 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convhex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hex[c / 16]);
		ft_putchar(hex[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		if (str[ctr] < 32 || str[ctr] > 126)
		{
			ft_putchar('\\');
			ft_convhex(str[ctr]);
		}
		else
		{
			ft_putchar(str[ctr]);
		}
		ctr++;
	}
}
/*
int	main(void)
{
	char str[] = {"Coucou\n\t\v\b\r\f\atu vas bien ?"};

	ft_putstr_non_printable(str);
	return (0);
}*/
