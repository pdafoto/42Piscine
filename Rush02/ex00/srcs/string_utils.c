/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: payllana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:34:04 by payllana          #+#    #+#             */
/*   Updated: 2023/08/27 16:38:17 by payllana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "header.h"

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*s)
		++s;
	return (s - str);
}

char	*ft_strcpy(char *destination, char *source)
{
	char	*dst;
	char	*src;

	dst = destination;
	src = source;
	while (*src)
	{
		*dst = *src;
		++src;
		++dst;
	}
	*dst = '\0';
	return (destination);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int	ft_int_check(char *numchar)
{
	int	i;

	i = 0;
	while (numchar[i])
	{
		if (numchar[i] < '0' || numchar[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

void	write_string(char *str)
{
	write(1, str, ft_strlen(str));
}
