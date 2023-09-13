/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeltran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:54:44 by ibeltran          #+#    #+#             */
/*   Updated: 2023/08/27 22:55:02 by ibeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
		main_functions(argv[1], "numbers.dict");
	else if (argc == 3)
		main_functions(argv[2], argv[1]);
	else
		return (1);
	return (0);
}
