/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:28:00 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/16 15:58:53 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	b;

	a = 0;
	while (a < size - 1)
	{
		b = a + 1;
		if (tab[a] > tab[b])
		{
			temp = tab[a];
			tab[a] = tab[b];
			tab[b] = temp;
			a = 0;
		}
		else
			a++;
	}
}
/*
int	main(void)
{
	int	arr[8] = {0, 3, 8, 4, 6, 2, 9, 3};
	int	size;

	size = 8;
	ft_sort_int_tab(arr, size);
	return (0);
}
*/
