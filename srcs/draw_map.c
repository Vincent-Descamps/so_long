/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:38:45 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/12 12:23:23 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	draw_background(t_game *game, int w, int h)
{
	t_img	b;
	int		i;
	int		j;

	b.img = mlx_new_image(game->mlx_ptr, w, h);
	b.data = (int *)mlx_get_data_addr(b.img, &b.bpp, &b.size_l, &b.endian);
	i = 0;
	while (i < h)
	{
		j = 0;
		while (j < w)
		{
			b.data[i * w + j] = 0x6ae6e1;
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win, b.img, 0, 0);
}

void	draw_img(t_game *game, t_coord coord, char ch)
{
	if (ch == '1')
		mlx_put_image_to_window(game->mlx_ptr, game->win, game->img.wall, coord.x, coord.y);
	if (ch == 'E')
		mlx_put_image_to_window(game->mlx_ptr, game->win, game->img.exit, coord.x, coord.y);
	if (ch == 'C')
		mlx_put_image_to_window(game->mlx_ptr, game->win, game->img.collect, coord.x, coord.y);
	if (ch == 'P')
		mlx_put_image_to_window(game->mlx_ptr, game->win, game->img.player, coord.x, coord.y);
}

int	draw_map(t_game *game)
{
	int	i;
	int	j;

	draw_background (game->mlx_ptr, game->map.width * 36, game->map.height * 36);
	i = 0;
	while (i < game->map.height)
	{
		j = 0;
		while (j < game->map.width)
		{
			if (game->map.map[i][j] == '1')
				draw_img(game, (t_coord){j * 36, i * 36}, '1');
			if (game->map.map[i][j] == 'E')
				draw_img(game, (t_coord){j * 36, i * 36}, 'E');
			if (game->map.map[i][j] == 'C')
				draw_img(game, (t_coord){j * 36, i * 36}, 'C');
			if (game->map.map[i][j] == 'P')
				draw_img(game, (t_coord){j * 36, i * 36}, 'P');
			j++;
		}
		i++;
	}
	return (0);
}

int	main_loop(t_game *game)
{
	draw_map(game);
	mlx_put_image_to_window(game->mlx_ptr, game->win, game->img.img, 0, 0);
	return (0);
}
