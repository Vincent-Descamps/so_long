/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:12:27 by vdescamp          #+#    #+#             */
/*   Updated: 2022/04/22 10:27:49 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	check_rect(t_game *game, char **map)
{
	int	i;
	int	ref;

	i = 0;
	ref = game->map.width + 1;
	while (i < game->map.height)
	{
		if (ft_strlen(map[i]) == ref)
			i++;
		else
		{
			printf("Sorry error not rectangle on line %d\n", i + 1);
			exit(1);
		}
	}
}

static void	check_char(t_game *game, char s)
{
	if (s != '1' && s != 'C' && s != 'E' && s != 'P')
	{
		printf("Character %c incompatible with map structure.\n", s);
		exit(1);
	}
	if (s == 'C')
		game->map.collect = 1;
	if (s == 'E')
		game->map.exit = 1;
	if (s == 'P')
		game->map.player = 1;
}

static void	check_wall(t_game *game, char **map)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->map.height)
	{
		j = 0;
		while (j < game->map.width)
		{
			if (i == 0 || i == game->map.height - 1 || j == 0 || j == game->map.width - 1)
				if (map[i][j] != '1')
					printf("Wrong character in wall\n line : %s, character : %c\n", map[i], map[i][j]);
			if (i != 0 && i != game->map.height - 1 && j != 0 && j != game->map.width - 1 && map[i][j] != '0')
				check_char(game, map[i][j]);
			j++;
		}
		i++;
	}
}

void	check_map(t_game *game)
{
	check_rect(game, game->map.map);
	check_wall(game, game->map.map);
}