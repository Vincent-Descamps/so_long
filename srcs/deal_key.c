/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:16:48 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/17 14:50:34 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move(t_game *game, int key_code, int i, int j)
{
	i = -1;
	while (++i < game->map.height)
	{
		j = -1;
		while (++j < game->map.width)
		{
			if (game->map.map[i][j] == 'P')
			{
				if (key_code == KEY_RIGHT || key_code == KEY_D)
				{
					move_right(game, i, j);
					j++;
				}
				else if (key_code == KEY_LEFT || key_code == KEY_A)
					move_left(game, i, j);
				else if (key_code == KEY_UP || key_code == KEY_W)
					move_up(game, i, j);
				else if (key_code == KEY_DOWN || key_code == KEY_S)
				{
					move_down(game, i, j);
					i++;
				}
			}
		}
	}
}

int	deal_key(int key_code, t_game *game)
{
	int		i;
	int		j;
	char	*step;

	i = 0;
	j = 0;
	step = "step";
	if (game->move >= 1)
	{
		step = "steps";
	}
	if (key_code != KEY_ESC)
	{
		move(game, key_code, i, j);
		ft_printf("%d %s\n", game->move, step);
	}
	if (key_code == KEY_ESC)
	{
		ft_printf("Thanks for playing!\n");
		exit(0);
	}
	return (0);
}
