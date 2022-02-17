/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:20:51 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/14 16:05:32 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(void)
{
	t_game	game;
	int		**fd;

	**fd = ;
	printf("%s", fd);
	game_init(fd);
	window_init(&game);
	img_init(&game);
	mlx_loop(game.mlx);
}
