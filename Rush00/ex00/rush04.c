/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperez-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:09:38 by pperez-c          #+#    #+#             */
/*   Updated: 2023/08/12 18:44:55 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_char(int x, int y, int aux_x, int aux_y);

void	rush(int x, int y)
{
	int	aux_x;
	int	aux_y;

	aux_x = x;
	aux_y = y;
	while (y > 0)
	{
		while (x > 0)
		{
			print_char(x, y, aux_x, aux_y);
			x = x - 1;
		}
		ft_putchar('\n');
		x = aux_x;
		y = y - 1;
	}
}

void	print_char(int x, int y, int aux_x, int aux_y)
{
	if (y == 1 && x == 1 && aux_x == 1 && aux_y != 1)
		ft_putchar('C');
	else if ((y == aux_y && x == aux_x) || (y == 1 && x == 1 && aux_y != 1))
		ft_putchar('A');
	else if ((y == 1 && x == aux_x) || (x == 1 && y == aux_y))
		ft_putchar('C');
	else if ((x == aux_x || x == 1) && (y != 1 && y != aux_y))
		ft_putchar('B');
	else if ((x != aux_x && x != 1) && (y == 1 || y == aux_y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}
