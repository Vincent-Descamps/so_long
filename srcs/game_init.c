/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:22:35 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/13 14:47:36 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	game_init(t_game *game)
{
	game->mlx_ptr = 0;
	game->win = 0;
	game->map.width = 0;
	game->map.height = 0;
	game->map.c = 0;
	game->map.e = 0;
	game->map.p = 0;
	game->move = 0;
}
