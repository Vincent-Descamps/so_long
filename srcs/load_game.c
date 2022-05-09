/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:22:57 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/09 11:35:05 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	*img_init_util(t_game *game, char *filename)
{
	void	*img;
	int		width;
	int		height;

	width = 0;
	height = 0;
	img = mlx_xpm_file_to_image(game->mlx_ptr, filename, &width, &height);
	if (height == 0 || width == 0)
		ft_error(1);
	printf("%d-----%d\n", width, height);
	return (img);
}

void	img_init(t_game *game)
{
	game->img.wall = img_init_util(game, "assets/lava_wall.xpm");
	game->img.floor = img_init_util(game, "assets/grass_0.xpm");
	game->img.collect = img_init_util(game, "assets/stone_f.xpm");
	game->img.exit = img_init_util(game, "assets/water_wall_1.xpm");
	game->img.player = img_init_util(game, "assets/player_test.xpm");
}

void	window_init(t_game *game)
{
	int	x;
	int	y;

	game->mlx_ptr = mlx_init();
	x = game->map.width * 36;
	y = game->map.height * 36;
	game->win = mlx_new_window(game->mlx_ptr, x, y, "So_long");
}

void	load_game(t_game *game)
{
	window_init(game);
	img_init(game);
}
