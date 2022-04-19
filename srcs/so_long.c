/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:04:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/04/14 12:46:27 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
	{
		printf("Invalid Number of Arguments");
		exit (1);
	}
	if (ber_extension(argv[1]) == 1)
	{
		printf("Make sure the map is a .ber file");
		exit (1);
	}
	game_init(&game);
	printf("**%d**\n", game.map.height);
	read_map(&game, argv[1]);
	printf("**%d**\n", game.map.height);
	check_map(&game);
	printf("**%d**\n", game.map.height);
	//execute(&game);
	return (0);
}
