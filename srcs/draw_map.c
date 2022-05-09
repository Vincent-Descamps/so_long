/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:38:45 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/09 14:01:09 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	draw_rectangles(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map.height)
	{
		j = 0;
		while (j < game->map.width)
		{
			if (game->map[i][j] == '1');
		}
	}
}

void	main_loop(t_game *game)
{
	draw_rectangles(game);
}

void	draw_map(t_game *game)
{
	mlx_loop_hook(game->mlx_ptr, &main_loop, &game);
}
