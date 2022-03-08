/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:04:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/03/08 10:14:41 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		printf("Invalid Number of Arguments");
	if (ber_extension(argv[1]) == 0)
		printf("Make sure the map is a .ber file");
	game_init(&game);
	game.fd = open(argv[1], O_RDONLY);
	if (game.fd < 1)
		printf("cannot access file");
	read_map(&game, game.fd);
	//execute(&game);
	return (0);
}
