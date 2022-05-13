/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:04:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/13 14:37:27 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		ft_error(1);
	if (ber_extension(argv[1]) == 1)
		ft_error(2);
	game_init(&game);
	read_map(&game, argv[1]);
	check_map(&game);
	load_game(&game);
	draw_map(&game);
	mlx_hook(game.win, X_EVENT_KEY_PRESS, 0, &deal_key, &game);
	mlx_hook(game.win, X_EVEN_KEY_EXIT, 0, &close, &game);
	mlx_loop_hook(game.mlx_ptr, &main_loop, &game);
	mlx_loop(game.mlx_ptr);
	return (0);
}
