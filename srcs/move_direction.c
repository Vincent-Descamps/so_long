/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_direction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:39:02 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/23 15:06:35 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move_right(t_game *game, int i, int j)
{
	if (game->map.map[i][j + 1] == '0' || game->map.map[i][j + 1] == 'C')
	{
		if (game->map.map[i][j + 1] == 'C')
			game->map.c -= 1;
		game->map.map[i][j] = '0';
		game->map.map[i][j + 1] = 'P';
		game->move += 1;
	}
	if (game->map.map[i][j + 1] == 'E' && game->map.c == 0)
	{
		game->move += 1;
		ft_printf("you won in %d moves!!!\n", game->move);
		exit (0);
	}
}

void	move_left(t_game *game, int i, int j)
{
	if (game->map.map[i][j - 1] == '0' || game->map.map[i][j - 1] == 'C')
	{
		if (game->map.map[i][j - 1] == 'C')
			game->map.c -= 1;
		game->map.map[i][j] = '0';
		game->map.map[i][j - 1] = 'P';
		game->move += 1;
	}
	if (game->map.map[i][j - 1] == 'E' && game->map.c == 0)
	{
		game->move += 1;
		ft_printf("you won in %d moves!!!\n", game->move);
		exit (0);
	}
}

void	move_up(t_game *game, int i, int j)
{
	if (game->map.map[i - 1][j] == '0' || game->map.map[i - 1][j] == 'C')
	{
		if (game->map.map[i - 1][j] == 'C')
			game->map.c -= 1;
		game->map.map[i][j] = '0';
		game->map.map[i - 1][j] = 'P';
		game->move += 1;
	}
	if (game->map.map[i - 1][j] == 'E' && game->map.c == 0)
	{
		game->move += 1;
		ft_printf("you won in %d moves!!!\n", game->move);
		exit (0);
	}
}

void	move_down(t_game *game, int i, int j)
{
	if (game->map.map[i + 1][j] == '0' || game->map.map[i + 1][j] == 'C')
	{
		if (game->map.map[i + 1][j] == 'C')
			game->map.c -= 1;
		game->map.map[i][j] = '0';
		game->map.map[i + 1][j] = 'P';
		game->move += 1;
	}
	if (game->map.map[i + 1][j] == 'E' && game->map.c == 0)
	{
		game->move += 1;
		ft_printf("you won in %d moves!!!\n", game->move);
		exit (0);
	}
}
