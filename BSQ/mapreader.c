/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapreader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopez-d <plopez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:29:25 by plopez-d          #+#    #+#             */
/*   Updated: 2023/08/30 18:22:24 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

char	**ft_mapalloc(int lines, int linelen)
{	
	int		i;
	char	**map;

	i = 0;
	map = (char **)malloc(sizeof(char *) * lines + 1);
	if (map == NULL)
		ft_print_error();
	while (i < lines)
	{
		map[i] = (char *)malloc(sizeof(char) * linelen + 1);
		if (map[i] == NULL)
			ft_print_error();
		i++;
	}
	return (map);
}

void	mapinit(char **map, char *buf, struct s_mapvalue current)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	p = 0;
	while (map[i] != NULL && buf[p] != '\0')
	{
		j = 0;
		while (buf[p] != '\n' && buf[p] != '\0')
		{
			if (buf[p] != current.empty && buf[p] != current.obstacle)
				ft_print_error();
			map[i][j] = buf[p];
			j++;
			p++;
		}
		map[i][j] = '\0';
		i++;
		if (buf[p] != '\0')
		p++;
	}
	if (i != current.lines)
		ft_print_error();
}

struct	s_mapvalue	ft_mapread(struct s_mapvalue current)
{
	char	*buf;
	int		mapsize;

	buf = (char *)malloc(sizeof(char) * 2147479552);
	if (buf == NULL)
		ft_print_error();
	mapsize = read(current.map_fd, buf, 2147479552);
	if (mapsize < 1)
		ft_print_error();
	current.linelen = ((mapsize - current.lines) / current.lines);
	current.map = ft_mapalloc(current.lines, current.linelen);
	mapinit(current.map, buf, current);
	free(buf);
	return (current);
}

struct	s_mapvalue	ft_keylogic(struct s_mapvalue current)
{
	int	i;

	i = 0;
	current.full = current.keystr[current.keysize - 1];
	current.obstacle = current.keystr[current.keysize - 2];
	current.empty = current.keystr[current.keysize - 3];
	if (current.full == current.obstacle)
		ft_print_error();
	if (current.full == current.empty)
		ft_print_error();
	if (current.obstacle == current.empty)
		ft_print_error();
	current.lines = ft_natoi(current.keystr, current.keysize - 3);
	if (current.lines < 1)
		ft_print_error();
	return (current);
}

struct	s_mapvalue	ft_keyread(char *name, struct s_mapvalue current)
{
	int		i;
	char	*keystrptr;

	i = 0;
	current.map_fd = open(name, O_RDONLY);
	if (current.map_fd == -1)
		ft_print_error();
	current.keystr = (char *)malloc(sizeof(char) * 15);
	if (current.keystr == NULL)
		ft_print_error();
	keystrptr = current.keystr;
	while (read(current.map_fd, keystrptr, 1) > 0 && *keystrptr != '\n')
	{
		keystrptr++;
		i++;
	}
	current.keysize = i;
	*keystrptr = '\0';
	return (ft_mapread(ft_keylogic(current)));
}
