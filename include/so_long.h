/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:05:14 by vdescamp          #+#    #+#             */
/*   Updated: 2022/03/08 17:47:52 by vdescamp         ###   ########.fr       */
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
	char	*line;
	char	*file;
	int		height;
	int		width;
	char	**map;
}	t_map;

/*struct principal architecture*/
typedef struct s_game
{
	void	*mlx;
	void	*win;
	t_img	img;
	t_map	map;
}	t_game;

void	game_init(t_game *game);
void	map_init(t_game *game);
void	read_map(t_game *game, char *file);
void	check_wall(char *str);
//void	execute(t_game *game);
int		ber_extension(char *str);
char	*get_next_line(int fd);

#endif
