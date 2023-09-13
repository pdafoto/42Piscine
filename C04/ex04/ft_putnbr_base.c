/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:17:08 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/25 09:15:45 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conv_base(int nbr, char *base, int len)
{
	long	longnbr;

	longnbr = nbr;
	if (longnbr < 0)
	{
		longnbr = -longnbr;
		ft_putchar('-');
	}
	if (longnbr >= len)
	{
		ft_conv_base(longnbr / len, base, len);
	}
	ft_putchar(base[longnbr % len]);
}

int	ft_error_check(char *base)
{
	int	err;
	int	i;
	int	k;

	err = 1;
	i = 0;
	while (base[i])
	{
		k = i + 1;
		while (base[k])
		{
			if (base[i] == base[k])
			{
				err = -1;
			}
			k++;
		}
		if (base[i] == '+' || base[i] == '-')
		{
			err = -1;
		}
		i++;
	}
	i = i * err;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_error_check(base);
	if (len < 2)
	{
		return ;
	}
	else
	{
		ft_conv_base(nbr, base, len);
	}
}
/*
int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 42;
	base = "01";
	ft_putnbr_base(nbr, base);
}*/
