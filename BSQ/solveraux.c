/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solveraux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopez-d <plopez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:51:18 by plopez-d          #+#    #+#             */
/*   Updated: 2023/08/30 16:51:30 by plopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

struct	s_mapvalue	ft_intvlcomp(struct s_mapvalue current, int i, int j)
{
	int	min;

	if (current.mapint[i][j - 1] <= current.mapint[i - 1][j - 1]
			&& current.mapint[i][j - 1] <= current.mapint[i - 1][j])
		min = current.mapint[i][j - 1];
	else if ((current.mapint[i - 1][j] <= current.mapint[i - 1][j - 1])
			&& (current.mapint[i - 1][j] <= current.mapint[i - 1][j]))
		min = current.mapint[i - 1][j];
	else
		min = current.mapint[i - 1][j - 1];
	current.mapint[i][j] = min + 1;
	return (current);
}

struct	s_mapvalue	ft_s(struct s_mapvalue current, int is, int js, int max)
{
	int	i;
	int	j;

	i = 0;
	while (i + is > is - max)
	{
		j = 0;
		while (j + js > js - max)
		{
			current.map[i + is][j + js] = current.full;
			j--;
		}
		i--;
	}
	return (current);
}

char	*ft_inputrd(char *buf)
{
	char	c;
	int		i;

	i = 0;
	while (1 > 0)
	{
		c = read(0, &buf[i], 1);
		if (c == -1)
			ft_print_error();
		if (buf[i] == '\n' && buf[i - 1] == '\n')
		{
			buf[i] = '\0';
			buf[i - 1] = '\0';
			break ;
		}
		i++;
	}
	return (buf);
}

struct	s_mapvalue	ft_mr_bis(struct s_mapvalue current, char *map, int i)
{
	int	mapsize;

	current = ft_keylogic(current);
	mapsize = i;
	while (map[mapsize])
		mapsize++;
	if (mapsize < i + 1)
		ft_print_error();
	map = map + current.keysize + 1;
	i = 0;
	while (*map != '\n')
	{
		i++;
		map++;
	}
	current.linelen = i;
	map = map - i;
	current.map = ft_mapalloc(current.lines, current.linelen);
	mapinit(current.map, map, current);
	return (current);
}
