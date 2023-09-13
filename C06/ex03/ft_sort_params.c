/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nperez-d <nperez-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:05:00 by nperez-d          #+#    #+#             */
/*   Updated: 2023/08/24 13:08:49 by nperez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **str1, char **str2)
{
	char	*swp;

	swp = *str1;
	*str1 = *str2;
	*str2 = swp;
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (str1[i] && str2[i] && r == 0)
	{
		r = str1[i] - str2[i];
		i++;
	}
	return (r);
}

void	ft_sort_params(int argc, char *argv[])
{
	int	j;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		j = 1;
		while (j < argc -1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv [j + 1]);
				swapped = 1;
			}
			j++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	if (argc > 1)
	{
		ft_sort_params(argc, argv);
		j = 1;
		while (j < argc)
		{
			ft_putstr(argv[j]);
			j++;
		}
	}
	return (0);
}
