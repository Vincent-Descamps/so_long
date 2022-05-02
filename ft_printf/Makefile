# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:25:41 by vdescamp          #+#    #+#              #
#    Updated: 2021/11/16 08:45:35 by vdescamp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ft_printf.c		\
		ft_check.c 		\
		ft_char_c.c 	\
		ft_str_s.c 	\
		ft_int_i.c 	\
		ft_unsint_u.c\
		ft_percent.c \
		ft_hex_x.c	\
		ft_ptr_p.c	\

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re : fclean all clean

.PHONY: all clean fclean re
