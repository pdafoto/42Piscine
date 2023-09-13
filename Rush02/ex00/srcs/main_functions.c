/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: payllana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:21:39 by payllana          #+#    #+#             */
/*   Updated: 2023/08/27 22:49:54 by ibeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "header.h"

void	parse_number(char *buf, struct s_List *list_size, int *cnt, int *b_ind)
{
	buf[*b_ind] = '\0';
	list_size[*cnt].num = ft_atoi(buf);
	*b_ind = 0;
}

void	parse_name(char *buf, struct s_List *list_size, int *cnt, int *b_ind)
{
	buf[*b_ind] = '\0';
	list_size[*cnt].name = (char *)malloc(ft_strlen(buf) + 1);
	ft_strcpy(list_size[*cnt].name, buf);
	*b_ind = 0;
	(*cnt)++;
}

int	read_dict_file(char *filename, struct s_List *list_size, int *count)
{
	int		file;
	char	buffer[100];
	int		buffer_index;
	char	c;

	file = open(filename, O_RDONLY);
	buffer_index = 0;
	if (file == -1)
		return (1);
	while (read(file, &c, 1) > 0)
	{
		if (c == ':')
			parse_number(buffer, list_size, count, &buffer_index);
		else if (c == '\n')
			parse_name(buffer, list_size, count, &buffer_index);
		else if (c != ' ' && c != '\t' && c != '\v')
		{
			buffer[buffer_index] = c;
			buffer_index++;
		}
	}
	close(file);
	return (0);
}

void	cleanup_memory(struct s_List *list_size, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(list_size[i].name);
		++i;
	}
}

int	main_functions(char *input, char *filename)
{
	int				num_to_spell;
	int				count;
	struct s_List	list_size[100];

	if (ft_int_check(input) == 1)
	{
		write_string("Error\n");
		return (1);
	}
	count = 0;
	if (read_dict_file(filename, list_size, &count))
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	num_to_spell = ft_atoi(input);
	if (num_to_spell > 2147483647)
		return (1);
	ft_divide(num_to_spell, list_size, count);
	write(1, "\n", 1);
	cleanup_memory(list_size, count);
	return (0);
}
