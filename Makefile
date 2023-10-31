# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apimikov <apimikov@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/31 14:25:18 by apimikov          #+#    #+#              #
#    Updated: 2023/10/30 15:16:47 by apimikov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_*.c
OBJS	= ${SRC:.c=.o}
NAME	= libft.a
CC		= cc
CFLAGS 	= -Wall -Wextra -Werror
HEADER = libft.h

%.o: %.c  $(HEADER)
			${CC} ${CFLAGS} -c $< -o $@

$(NAME) :	${OBJS}
			ar rc ${NAME} ${OBJS}

all: 		$(NAME)

clean :
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
