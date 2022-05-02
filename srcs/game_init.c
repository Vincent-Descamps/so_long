/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:22:35 by vdescamp          #+#    #+#             */
/*   Updated: 2022/04/22 10:22:08 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	game_init(t_game *game)
{
	game->mlx = 0;
	game->win = 0;
	game->map.width = 0;
	game->map.height = 0;
	game->map.collect = 0;
	game->map.exit = 0;
	game->map.player = 0;
}
