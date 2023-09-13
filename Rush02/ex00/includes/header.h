/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: payllana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:38:55 by payllana          #+#    #+#             */
/*   Updated: 2023/08/27 22:58:09 by ibeltran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define HEADER_H

struct s_List {
	int		num;
	char	*name;
};

int		ft_strlen(char *str);
char	*ft_strcpy(char *destination, char *source);
int		ft_atoi(const char *str);
int		ft_int_check(char *numchar);
void	write_string(char *str);
void	parse_number(char *buf, struct s_List *list_size, int *cnt, int *b_ind);
void	parse_name(char *buf, struct s_List *list_size, int *cnt, int *b_ind);
int		read_dict_file(char *filename, struct s_List *list_size, int *count);
void	ft_divide_under_21(int num, struct s_List *list_size, int count);
void	ft_divide_under_100(int num, struct s_List *list_size, int count);
void	ft_divide_under_1000(int num, struct s_List *list_size, int count);
void	ft_divide_under_1000000(int num, struct s_List *list_size, int count);
void	ft_divide_under_1000000000(int num, struct s_List *list_size, int cnt);
void	ft_divide_billions(int num, struct s_List *list_size, int count);
void	ft_divide(int num, struct s_List *list_size, int count);
void	cleanup_memory(struct s_List *list_size, int count);
int		main_functions(char *input, char *filename);
#endif
