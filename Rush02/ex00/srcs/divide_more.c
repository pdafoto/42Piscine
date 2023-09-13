/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_more.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: payllana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:44:50 by payllana          #+#    #+#             */
/*   Updated: 2023/08/27 21:23:21 by ibeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "header.h"

void	ft_divide_under_1000(int num, struct s_List *list_size, int count)
{
	int	i;

	ft_divide(num / 100, list_size, count);
	i = 0;
	while (i < count)
	{
		if (list_size[i].num == 100)
		{
			write(1, " ", 1);
			write_string(list_size[i].name);
			break ;
		}
		++i;
	}
	if (num % 100 > 0)
	{
		write(1, " ", 1);
		ft_divide(num % 100, list_size, count);
	}
	return ;
}

void	ft_divide_under_1000000(int num, struct s_List *list_size, int count)
{
	int	i;

	ft_divide(num / 1000, list_size, count);
	i = 0;
	while (i < count)
	{
		if (list_size[i].num == 1000)
		{
			write(1, " ", 1);
			write_string(list_size[i].name);
			break ;
		}
		++i;
	}
	if (num % 1000 > 0)
	{
		write(1, " ", 1);
		ft_divide(num % 1000, list_size, count);
	}
	return ;
}

void	ft_divide_under_1000000000(int num, struct s_List *list_size, int count)
{
	int	i;

	ft_divide(num / 1000000, list_size, count);
	i = 0;
	while (i < count)
	{
		if (list_size[i].num == 1000000)
		{
			write(1, " ", 1);
			write_string(list_size[i].name);
			break ;
		}
		++i;
	}
	if (num % 1000000 > 0)
	{
		write(1, " ", 1);
		ft_divide(num % 1000000, list_size, count);
	}
	return ;
}

void	ft_divide_billions(int num, struct s_List *list_size, int count)
{
	int	i;

	ft_divide(num / 1000000000, list_size, count);
	i = 0;
	while (i < count)
	{
		if (list_size[i].num == 1000000000)
		{
			write(1, " ", 1);
			write_string(list_size[i].name);
			break ;
		}
		++i;
	}
	if (num % 1000000000 > 0)
	{
		write(1, " ", 1);
		ft_divide(num % 1000000000, list_size, count);
	}
	return ;
}
