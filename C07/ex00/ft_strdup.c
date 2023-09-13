/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:38:04 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/28 17:13:10 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dst;

	len = ft_strlen(src);
	dst = (char *)malloc(len * sizeof(char));
	ft_strcpy(dst, src);
	return (dst);
}
/*
int main(int argc, char *argv[])
{
	char	*dst;

	(void)argc;
	dst = ft_strdup(argv[1]);
	printf("%s", dst);
	return (0);
}*/
