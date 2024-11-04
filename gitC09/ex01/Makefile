CFLAGS = -Wall -Werror -Wextra

SRCDIR = srcs/

SRCS = ${SRCDIR}ft_putchar.c ${SRCDIR}ft_swap.c ${SRCDIR}ft_putstr.c ${SRCDIR}ft_strlen.c ${SRCDIR}ft_strcmp.c

OBJDIR = includes/

NAME = libft.a

OBJS = ${SRCS:.c=.o}

RM = rm -f

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -c ${SRCS} -I${OBJDIR}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
