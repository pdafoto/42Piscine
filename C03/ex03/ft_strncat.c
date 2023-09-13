/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:10:48 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/23 09:54:08 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	ctr_dest;
	unsigned int	ctr_src;

	if (nb < 1)
	{
		return (dest);
	}
	ctr_dest = ft_strlen(dest);
	ctr_src = 0;
	while (src[ctr_src] && ctr_src < nb)
	{
		dest[ctr_dest + ctr_src] = src[ctr_src];
		ctr_src++;
	}
	dest[ctr_dest + ctr_src] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char			dest[100] = "Hola, ";
	char			src[] = "Marvin!";
	unsigned int	nb;

	nb = 3;
	ft_strncat(dest, src, nb);
	printf("%s", dest);
	return (0);
}*/
