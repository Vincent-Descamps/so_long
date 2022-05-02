/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:04:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/04/21 10:12:40 by vdescamp         ###   ########.fr       */
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
	read_map(&game, argv[1]);
	check_map(&game);
	//execute(&game);
	return (0);
}
