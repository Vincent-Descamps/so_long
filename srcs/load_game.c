/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:22:57 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/12 14:24:30 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	img_init(t_game *game)
{
	int	width;
	int	height;

	game->img.wall = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/lava_wall_1.xpm", &width, &height);
	game->img.floor = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/grass_0.xpm", &width, &height);
	game->img.collect = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/stone_f.xpm", &width, &height);
	game->img.exit = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/water_wall_1.xpm", &width, &height);
	game->img.player = mlx_xpm_file_to_image
		(game->mlx_ptr, "../assets/player_test.xpm", &width, &height);
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
