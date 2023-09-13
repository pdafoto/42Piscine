/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:34:12 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/16 17:27:35 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*begin;

	begin = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (begin);
}
/*int	main(void)
{
	char	src[] = {"Hola, Marvin!"};
	char	dest[100];

	printf("%s\n", src);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
