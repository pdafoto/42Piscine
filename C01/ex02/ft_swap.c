/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:18:55 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/14 16:05:38 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap_a;
	int	swap_b;

	swap_a = *a;
	swap_b = *b;
	*b = swap_a;
	*a = swap_b;
}
