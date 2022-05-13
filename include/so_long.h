/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:05:14 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/13 17:06:34 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define X_EVENT_KEY_PRESS	2
# define X_EVEN_KEY_EXIT	17
# define KEY_ESC			53
# define KEY_W				13
# define KEY_A				0
# define KEY_S				1
# define KEY_D				2
# define KEY_UP				126
# define KEY_DOWN			125
# define KEY_LEFT			123
# define KEY_RIGHT			124
# define TILE_SIZE			50

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>
# include <string.h>
# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include "get_next_line.h"

typedef struct s_coord
{
	int	x;
	int	y;
	int	width;
	int	height;
}	t_coord;

/*struct for sprites*/
typedef struct s_img
{
	void	*img;
	int		*data;
	int		size_l;
	int		bpp;
	int		endian;
	void	*player;
	void	*collect;
	void	*exit;
	void	*wall;
	void	*floor;
}	t_img;

/*struct for the map*/
typedef struct s_map
{
	int		height;
	int		width;
	char	**map;
	int		p;
	int		e;
	int		c;
}	t_map;

/*struct principal architecture*/
typedef struct s_game
{
	void	*mlx_ptr;
	void	*win;
	int		move;
	t_img	img;
	t_map	map;
}	t_game;

void	game_init(t_game *game);
void	read_map(t_game *game, char *file);
void	check_map(t_game *game);
int		ber_extension(char *str);
int		ft_error(int n);
char	*get_next_line(int fd);
void	load_game(t_game *game);
int		draw_map(t_game *game);
int		main_loop(t_game *game);
int		deal_key(int key_code, t_game *game);
void	move_right(t_game *game, int i, int j);
void	move_left(t_game *game, int i, int j);
void	move_up(t_game *game, int i, int j);
void	move_down(t_game *game, int i, int j);
#endif
