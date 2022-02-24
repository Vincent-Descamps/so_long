/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:04:43 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/24 09:04:57 by vdescamp         ###   ########.fr       */
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
