/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:38:45 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/23 15:18:43 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	print_string(t_game *game)
{
	int		color;
	char	*s;
	int		x;
	int		y;

	color = 0x000814;
	x = TILE_SIZE * (game->map.width - 2);
	y = TILE_SIZE * (game->map.height - 1);
	s = ft_strcat(ft_itoa(game->move), " Steps");
	mlx_string_put(game->mlx_ptr, game->win, x, y, color, s);
	free(s);
}

void	draw_img(t_game *game, t_coord coord, char ch)
{
	if (ch == '1')
		mlx_put_image_to_window(game->mlx_ptr, game->win,
			game->img.wall, coord.x, coord.y);
	if (ch == '0')
		mlx_put_image_to_window(game->mlx_ptr, game->win,
			game->img.floor, coord.x, coord.y);
	if (ch == 'E')
		mlx_put_image_to_window(game->mlx_ptr, game->win,
			game->img.exit, coord.x, coord.y);
	if (ch == 'C')
		mlx_put_image_to_window(game->mlx_ptr, game->win,
			game->img.collect, coord.x, coord.y);
	if (ch == 'P')
		mlx_put_image_to_window(game->mlx_ptr, game->win,
			game->img.player, coord.x, coord.y);
}

int	draw_map(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map.height)
	{
		j = 0;
		while (j < game->map.width)
		{
			if (game->map.map[i][j] == '1')
				draw_img(game, (t_coord){j * TILE_SIZE, i * TILE_SIZE}, '1');
			if (game->map.map[i][j] == '0')
				draw_img(game, (t_coord){j * TILE_SIZE, i * TILE_SIZE}, '0');
			if (game->map.map[i][j] == 'E')
				draw_img(game, (t_coord){j * TILE_SIZE, i * TILE_SIZE}, 'E');
			if (game->map.map[i][j] == 'C')
				draw_img(game, (t_coord){j * TILE_SIZE, i * TILE_SIZE}, 'C');
			if (game->map.map[i][j] == 'P')
				draw_img(game, (t_coord){j * TILE_SIZE, i * TILE_SIZE}, 'P');
			j++;
		}
		i++;
	}
	return (0);
}

int	main_loop(t_game *game)
{
	draw_map(game);
	print_string(game);
	return (0);
}
