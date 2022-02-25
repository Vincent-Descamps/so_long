/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:05:14 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/24 15:17:42 by vdescamp         ###   ########.fr       */
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
	char	*data;
	int		width;
	int		height;
	int		size_l;
	int		bpp;
	int		endian;
}	t_img;

/*struct for the map*/
typedef struct s_map
{
	int		fd;
	char	*file;
	char	**map;
}	t_map;

/*struct principal architecture*/
typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		height;
	int		width;
	t_img	data;
	t_map	*map;
}	t_game;

void	game_init(t_game *game);
void	map_init(t_game *game);
void	read_map(t_game *game, char *file);

#endif
