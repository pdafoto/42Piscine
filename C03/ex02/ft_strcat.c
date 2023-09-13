/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:08:57 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/23 09:43:58 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	ctr_dest;
	unsigned int	ctr_src;

	ctr_dest = 0;
	ctr_src = 0;
	while (dest[ctr_dest])
	{
		ctr_dest++;
	}
	while (src[ctr_src])
	{
		dest[ctr_dest] = src[ctr_src];
		ctr_dest++;
		ctr_src++;
	}
	dest[ctr_dest] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[100] = "Hola, ";
	char	src[] = "Marvin!";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/
