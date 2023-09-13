/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:14:27 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/23 10:18:34 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	temp;

	temp = 0;
	while (str[temp])
	{
		temp++;
	}
	return (temp);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ctr_dest;
	unsigned int	ctr_src;
	unsigned int	len_dest;
	unsigned int	len_src;

	ctr_dest = 0;
	ctr_src = 0;
	while (dest[ctr_dest])
	{
		ctr_dest++;
	}
	len_dest = ctr_dest;
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
	{
		return (len_src + size);
	}
	while (src[ctr_src] && ctr_src < size - len_dest -1)
	{
		dest[ctr_dest] = src[ctr_src];
		ctr_dest++;
		ctr_src++;
	}
	dest[ctr_dest] = '\0';
	return (len_dest + len_src);
}
/*
int main(void)
{
	char	dest[100] = "Hola, ";
	char	src[] = "Marvin!";
	unsigned int	size = 7;
	int				tot;

	printf("%s\n%s\n", dest, src);
	tot = ft_strlcat(dest, src, size);
	printf("%s -> %d", dest, tot);
	return (0);
}*/
