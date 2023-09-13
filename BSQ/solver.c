/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42mdrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:03:41 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/30 14:59:37 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

struct	s_mapvalue	ft_mapintalloc(struct s_mapvalue current)
{	
	int	i;

	i = 0;
	current.mapint = (int **)malloc(sizeof(int *) * current.lines);
	while (i < current.lines)
	{
		current.mapint[i] = (int *)malloc(sizeof(int) * current.linelen);
		i++;
	}
	return (current);
}

struct	s_mapvalue	ft_start(struct s_mapvalue current)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < current.linelen)
	{
		if (current.map[0][j] == current.empty)
			current.mapint[0][j] = 1;
		else
			current.mapint[0][j] = 0;
		j++;
	}
	while (i < current.lines)
	{
		if (current.map[i][0] == current.empty)
			current.mapint[i][0] = 1;
		if (current.map[i][0] == current.obstacle)
			current.mapint[i][0] = 0;
		i++;
	}
	return (current);
}

struct	s_mapvalue	ft_fill(struct s_mapvalue current)
{
	int	i;
	int	j;

	i = 1;
	while (i < current.lines)
	{
		j = 1;
		while (j < current.linelen)
		{
			if (current.map[i][j] == current.obstacle)
			{
				current.mapint[i][j] = 0;
				j++;
			}
			else
			{
				current = ft_intvlcomp(current, i, j);
				j++;
			}
		}
		i++;
	}
	i = 0;
	return (current);
}

void	ft_changesol(struct s_mapvalue current, int max, int isol, int jsol)
{
	int	i;
	int	j;

	i = 0;
	current = ft_s(current, isol, jsol, max);
	while (i < current.lines)
	{
		j = 0;
		while (j < current.linelen)
		{
			write(1, &current.map[i][j], 1);
			j++;
		}
		i++;
		write(1, &"\n", 1);
	}
}

void	ft_findsol(struct s_mapvalue current)
{
	int	i;
	int	j;
	int	max;
	int	isol;
	int	jsol;

	i = 0;
	j = 0;
	max = 0;
	while (i < current.lines)
	{
		while (j < current.linelen)
		{
			if (current.mapint[i][j] > max)
			{
				max = current.mapint[i][j];
				isol = i;
				jsol = j;
			}
			j++;
		}
		j = 0;
		i++;
	}	
	ft_changesol(current, max, isol, jsol);
}
