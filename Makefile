NAME = libft.a

SRC = 	ft_*.c

FLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar -ruvcs $@ $^

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@
	
clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
