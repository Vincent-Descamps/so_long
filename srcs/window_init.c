/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:23:11 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/14 14:59:01 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	window_init(t_game	*game)
{
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, game->width, game->height, "So_long");
}
