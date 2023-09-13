SRC		= main.c main_functions.c divide_main.c divide_more.c string_utils.c

SRCS	= ${addprefix ${PRE}, ${SRC}}

OBJS	= ${SRCS:.c=.o}

PRE		= ./srcs/

HEAD	= ./includes/

NAME	= rush-02

all:	${NAME}

%.o:	%.c
		cc -Wall -Wextra -Werror -I ${HEAD} -c $*.c -o $*.o

$(NAME): $(OBJS)
		cc -Wall -Wextra -Werror -o $@ $^

sanitize: $(OBJS)
		cc -Wall -Wextra -Werror -fsanitize=address - o $@ $^

clean:
		rm -fr ${OBJS}

fclean:			clean
		rm -fr ${NAME}

re:				fclean all

re:				fclean ${NAME}

.PHONY:			all clean fclean re sanitize
