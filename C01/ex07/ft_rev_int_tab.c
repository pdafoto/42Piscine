/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:38:47 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/16 15:14:02 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	while (a < size / 2)
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		a++;
		b--;
	}
}
/*int	main(void)
{
	int	arr[8] = {0, 3, 8, 4, 6, 2, 9, 3};
	int	size;

	size = 8;
	ft_rev_int_tab(arr, size);
	return (0);
}*/
