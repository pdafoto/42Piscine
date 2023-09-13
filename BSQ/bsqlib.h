/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopez-d <plopez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 04:09:54 by plopez-d          #+#    #+#             */
/*   Updated: 2023/08/30 04:10:02 by plopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H
# include <unistd.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_mapvalue {
	char	**map;
	int		**mapint;
	char	*keystr;
	char	empty;
	char	obstacle;
	char	full;
	int		keysize;
	int		map_fd;
	int		lines;
	int		linelen;
	int		error;
}	t_mapvalue;

int						ft_natoi(char *str, int limit);

char					**ft_mapalloc(int lines, int linelen);

void					mapinit(char **map, char *buf, t_mapvalue current);

t_mapvalue				ft_mapread(t_mapvalue current);

t_mapvalue				ft_keylogic(t_mapvalue current);

t_mapvalue				ft_keyread(char *name, t_mapvalue current);

t_mapvalue				ft_mapintalloc(t_mapvalue current);

t_mapvalue				ft_start(t_mapvalue current);

t_mapvalue				ft_fill(t_mapvalue current);

void					ft_changesol(t_mapvalue current, int max, int i, int j);

void					ft_findsol(t_mapvalue current);

void					ft_solve_assistant(t_mapvalue current);

void					ft_print_error(void);

char					*ft_userinput(void);

struct s_mapvalue		ft_mapread_aux(struct s_mapvalue current, char *mapsr);

//Funciones auxiliares

struct s_mapvalue		ft_intvlcomp(struct s_mapvalue current, int i, int j);

struct s_mapvalue		ft_s(struct s_mapvalue current, int i, int j, int m);

char					*ft_inputrd(char *buf);

struct s_mapvalue		ft_mr_bis(struct s_mapvalue current, char *m, int i);

#endif
