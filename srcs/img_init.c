/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:49:03 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/14 12:57:31 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	img_init(t_game *game)
{
	game->img.img = mlx_new_image(game->mlx, game->width, game->height);
	game->img.data = (int *)mlx_get_data_addr(game->img.img, &game->img.bpp,
			&game->img.size_l, &game->img.endian);
}
