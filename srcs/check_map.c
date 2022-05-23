/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:12:27 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/23 12:15:46 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	check_rect(t_game *game, char **map)
{
	int		i;
	size_t	ref;

	i = 0;
	ref = game->map.width + 1;
	while (i < game->map.height)
	{
		if (ft_strlen(map[i]) == ref)
			i++;
		else
			ft_error(4);
	}
}

static void	check_char(t_game *game, char s)
{
	if (s != '1' && s != 'C' && s != 'E' && s != 'P')
		ft_error(6);
	if (s == 'C')
		game->map.c += 1;
	if (s == 'E')
		game->map.e = 1;
	if (s == 'P')
		game->map.p = 1;
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
			if (i == 0 || i == game->map.height - 1
				|| j == 0 || j == game->map.width - 1)
				if (map[i][j] != '1')
					ft_error(5);
			if (i != 0 && i != game->map.height - 1
				&& j != 0 && j != game->map.width - 1 && map[i][j] != '0')
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
	if (game->map.c < 1 || game->map.e != 1 || game->map.p != 1)
		ft_error(7);
}
