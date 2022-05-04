/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:22:57 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/04 15:42:25 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	*init_file(t_game *game, char *filename)
{
	void	*img;
	int		x;
	int		y;

	x = 0;
	y = 0;

}

void	img_init(t_game *game, t_img *img)
{
	img->wall = init_file(game, "assets/texture/wall.xpm");
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
	img_init(&game->img);
}
