/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:06:10 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/23 12:51:25 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>
# include <string.h>
# include "../mlx/mlx.h"
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"

typedef struct s_img
{
	void	*img;
	int		*data;
	int		size_l;
	int		bpp;
	int		endian;
}	t_img;

typedef struct s_parsing
{
	int		fd;
	int		bool;
	int		i;
}	t_parsing;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		height;
	int		width;
	char		**map;
	t_img	img;
}	t_game;

void	game_init(char *fd);
void	window_init(t_game	*game);
void	img_init(t_game *game);
void	map_init(t_game game, char *file);
void	get_width(char *fd);
void	get_height(char *fd);

#endif
