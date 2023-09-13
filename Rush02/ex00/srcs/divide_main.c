/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: payllana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:56:55 by payllana          #+#    #+#             */
/*   Updated: 2023/08/27 21:22:10 by ibeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "header.h"

void	ft_divide_under_21(int num, struct s_List *list_size, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (list_size[i].num == num)
		{
			write_string(list_size[i].name);
			return ;
		}
		++i;
	}
}

void	ft_divide_under_100(int num, struct s_List *list_size, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (list_size[i].num == num / 10 * 10)
		{
			write_string(list_size[i].name);
			break ;
		}
		++i;
	}
	i = 0;
	while (i < count)
	{
		if (list_size[i].num == num % 10)
		{
			write(1, " ", 1);
			write_string(list_size[i].name);
			break ;
		}
		++i;
	}
	return ;
}

void	ft_divide(int num, struct s_List *list_size, int count)
{
	if (num < 21)
		ft_divide_under_21(num, list_size, count);
	else if (num < 100)
		ft_divide_under_100(num, list_size, count);
	else if (num < 1000)
		ft_divide_under_1000(num, list_size, count);
	else if (num < 1000000)
		ft_divide_under_1000000(num, list_size, count);
	else if (num < 1000000000)
		ft_divide_under_1000000000(num, list_size, count);
	else
		ft_divide_billions(num, list_size, count);
}
