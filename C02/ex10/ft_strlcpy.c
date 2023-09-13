/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:26:08 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/28 12:00:14 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ctr;
	unsigned int	i;

	ctr = 0;
	while (src[ctr])
	{
		ctr++;
	}
	if (size < 1)
	{
		return (ctr);
	}
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ctr);
}
/*
int	main(void)
{
	char			src[] = {"Marvin!"};
	char			dest[100] = {"Hola, "};
	unsigned int	len;

	printf("%s", src);
	len = ft_strlcpy(dest, src, 0);
	printf("%s -> %d\n", dest, len);
	return (0);
}*/
