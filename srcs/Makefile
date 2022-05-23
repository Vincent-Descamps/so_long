# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 12:06:57 by vdescamp          #+#    #+#              #
#    Updated: 2022/05/23 12:21:56 by vdescamp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = so_long.c \
		ber_extension.c \
		check_map.c \
		deal_key.c \
		draw_map.c \
		error.c \
		game_init.c \
		get_next_line.c \
		get_next_line_utils.c \
		load_game.c \
		move_direction.c \
		read_map.c \
		../libft/ft_strcmp.c \
		../libft/ft_itoa.c \
		../libft/ft_strcat.c \
		../ft_printf/ft_printf.c \
		../ft_printf/ft_check.c \
		../ft_printf/ft_str_s.c \
		../ft_printf/ft_char_c.c \
		../ft_printf/ft_hex_x.c \
		../ft_printf/ft_int_i.c \
		../ft_printf/ft_percent.c \
		../ft_printf/ft_ptr_p.c \
		../ft_printf/ft_unsint_u.c \

OBJS = ${SRCS:.c=.o}

NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror

FLAGSMLX = -lmlx -framework OpenGL -framework AppKit

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
		$(CC) $(OBJS) $(FLAGSMLX) $(CFLAGS) -o $(NAME)

%o:	%.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

clean :
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}
		${RM} *.out

re: fclean all

.PHONY: all clean fclean re
