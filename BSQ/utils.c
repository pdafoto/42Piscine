/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopez-d <plopez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:04:25 by plopez-d          #+#    #+#             */
/*   Updated: 2023/08/30 17:07:29 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsqlib.h"

void	ft_print_error(void)
{
	write(1, "map error\n", 10);
	exit (1);
}

void	ft_solve_assistant(struct s_mapvalue current)
{
	current = ft_mapintalloc(current);
	current = ft_start(current);
	current = ft_fill(current);
	ft_findsol(current);
}

int	ft_natoi(char *str, int limit)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i] && i < limit)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
		else
			ft_print_error();
	}
	return (num);
}

char	*ft_userinput(void)
{
	int		i;
	char	*buf;
	char	*map;

	i = 0;
	buf = (char *)malloc(sizeof(char) * 2147479552);
	buf = ft_inputrd(buf);
	while (buf[i])
		i++;
	map = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (buf[i])
	{
		map[i] = buf[i];
		i++;
	}
	map[i] = '\0';
	free(buf);
	return (map);
}

struct	s_mapvalue	ft_mapread_aux(struct s_mapvalue current, char *mapstring)
{
	int	i;

	i = 0;
	current.keystr = (char *)malloc(sizeof(char) * 15);
	if (current.keystr == NULL)
		ft_print_error();
	while (mapstring[i] != '\n')
	{
		current.keystr[i] = mapstring[i];
		i++;
	}
	current.keysize = i;
	current.keystr[i] = '\0';
	return (ft_mr_bis(current, mapstring, i));
}
