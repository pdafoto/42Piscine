# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plopez-d <plopez-d@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/30 04:10:29 by plopez-d          #+#    #+#              #
#    Updated: 2023/08/30 04:10:43 by plopez-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c utils.c mapreader.c solver.c solveraux.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address

NAME = bsq 

all = $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	-rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
