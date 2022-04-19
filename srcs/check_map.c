/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:12:27 by vdescamp          #+#    #+#             */
/*   Updated: 2022/04/19 14:18:36 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	check_rect(t_game *game, char **map)
{
	int	i;
	int	ref;

	i = 0;
	ref = game->map.width;
	while (i < game->map.height)
	{
		if (strlen(map[i]) == ref)
			i++;
		else
		{
			printf("Sorry error not rectangle on line %d\n", i);
			break ;
		}
	}
}

void	check_wall(t_game *game, char **map)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= game->map.height - 1)
	{
		if (i == 0 || i == game->map.height - 1)
		{
			while (j < game->map.width - 1)
			{
				if (map[i][j] == '1')
					j++;
				else
				{
					printf("Wrong character in wall\n");
					break ;
				}
			}
		}
		j = 0;
		i++;
	}
}

void	check_map(t_game *game)
{
	check_rect(game, game->map.map);
	check_wall(game, game->map.map);
}
