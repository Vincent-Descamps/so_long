/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 10:20:51 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/23 12:50:48 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	t_game	game;

	if (argc != 2)
		printf("Invalid Number of Arguments");
	if (ber_extension(argv[1]) == 1)
		printf("Make sure the map is a .ber file");
	map_init(&game, argv[1]);
}
