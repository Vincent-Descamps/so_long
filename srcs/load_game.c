/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:22:57 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/17 15:03:36 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	img_init_36(t_game *game)
{
	int	width;
	int	height;

	game->img.wall = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/lava_wall_1.xpm", &width, &height);
	game->img.floor = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/grass_0.xpm", &width, &height);
	game->img.collect = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/col_1.xpm", &width, &height);
	game->img.exit = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/Exit_ramen.xpm", &width, &height);
	game->img.player = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/player_test.xpm", &width, &height);
}

void	img_init_50(t_game *game)
{
	int	width;
	int	height;

	game->img.wall = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/50/Wall.xpm", &width, &height);
	game->img.floor = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets//50/Floor.xpm", &width, &height);
	game->img.collect = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/50/Col.xpm", &width, &height);
	game->img.exit = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/50/Exit.xpm", &width, &height);
	game->img.player = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/50/Hero_p.xpm", &width, &height);
}

void	window_init(t_game *game)
{
	int	x;
	int	y;

	game->mlx_ptr = mlx_init();
	x = game->map.width * TILE_SIZE;
	y = game->map.height * TILE_SIZE;
	game->win = mlx_new_window(game->mlx_ptr, x, y, "So_long");
}

void	load_game(t_game *game)
{
	window_init(game);
	if (TILE_SIZE == 36)
		img_init_36(game);
	else if (TILE_SIZE == 50)
		img_init_50(game);
}
