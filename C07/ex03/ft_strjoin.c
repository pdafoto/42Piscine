/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:13:43 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/31 14:26:47 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *sep)
{
	int	len;

	len = 0;
	while (sep[len])
		len++;
	return (len);
}

int	ft_strslen(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			j++;
			len++;
		}
	j = 0;
	i++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

char	*ft_makestr(int size, char *res, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		res = ft_strcpy(res, strs[i]);
		if (i + 1 < size)
			res = ft_strcpy(res, sep);
		i++;
	}
	*res = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		seplen;
	int		strslen;
	char	*temp;

	if (size == 0)
	{
		res = (char *)malloc(1);
		*res = '\0';
		return (res);
	}
	seplen = ft_strlen (sep);
	strslen = ft_strslen (size, strs);
	res = (char *)malloc((seplen + strslen + 1) * sizeof(char));
	temp = res;
	res = ft_makestr(size, res, strs, sep);
	return (temp);
}
/*
int	main(void)
{
	int		size;
	char	*strs[] = {"Hello", "Marvin", "from", "Arthur"};
	char	*sep = "-";
	char	*result;

	size = sizeof(strs) / sizeof(strs[0]);
	result = ft_strjoin(size, strs, sep);
	printf("Concatenated string: %s\n", result);
	return (0);
}*/
