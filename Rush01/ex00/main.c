/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fram-var <fram-var@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:01:04 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/19 14:58:28 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_solver(char *puzzle)
{
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "Error\n", 6); /*Si el nº de argumentos no es dos devuelve error*/ 
	}
	else
	{
		char	puzzle[]; /*El puzzle que tenemos que resolver*/
		int		matrix[][];

		puzzle[] = arg[1]; 
		ft_solver(puzzle); /*pasamos el puzzle a la función*/
		write (1, "matrix[0][0] matrix[0][1] matrix[0][2] matrix[0][3]\n", 8); /*escribir primera fila*/
		write (1, "matrix[1][0] matrix[1][1] matrix[1][2] matrix[1][3]\n", 8); /*segunda fila*/
		write (1, "matrix[2][0] matrix[2][1] matrix[2][2] matrix[2][3]\n", 8);
		write (1, "matrix[3][0] matrix[3][1] matrix[3][2] matrix[3][3]\n", 8);
	}
	return (0);
}

