/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopez-d <plopez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:14:42 by plopez-d          #+#    #+#             */
/*   Updated: 2023/08/30 18:17:20 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int	main(int argc, char *argv[])
{	
	int			i;
	char		*map;
	t_mapvalue	current;

	current.map = NULL;
	i = 1;
	if (argc < 1)
		ft_print_error();
	if (argc == 1)
	{
		map = ft_userinput();
		current = ft_mapread_aux(current, map);
		ft_solve_assistant(current);
		write(1, &"\n", 1);
	}
	else
	{
		while (argv[i])
		{
			current = ft_keyread(argv[i], current);
			ft_solve_assistant(current);
			write(1, "\n", 1);
			i++;
		}
	}
}
