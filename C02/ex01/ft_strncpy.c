/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:22:38 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/21 13:41:14 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	ctr;

	ctr = 0;
	while (src[ctr] && ctr < n)
	{
		dest[ctr] = src[ctr];
		ctr++;
	}
	while (ctr < n)
	{
		dest[ctr] = '\0';
		ctr++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = {"Hola, "};
	char	dest[] = {"Marvin!"};

	printf("%s\n", src);
	ft_strncpy(dest, src, 2);
	printf("%s\n", dest);
	return (0);
}*/
