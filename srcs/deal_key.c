/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:16:48 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/12 18:01:23 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move(t_game *game, int key_code)
{
	int		i;
	int		j;
	char	p_pos;

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
					if (game->map.map[i][j + 1] == '0')
					{
						game->map.map[i][j] = '0';
						game->map.map[i][j + 1] = 'P';
						printf("Right\n");
						j++;
					}
				}
				else if (key_code == KEY_LEFT || key_code == KEY_A)
				{
					if (game->map.map[i][j - 1] == '0')
					{
						game->map.map[i][j] = '0';
						game->map.map[i][j - 1] = 'P';
						printf("Left\n");
					}
				}
				else if (key_code == KEY_UP || key_code == KEY_W)
				{
					if (game->map.map[i - 1][j] == '0')
					{
						game->map.map[i][j] = '0';
						game->map.map[i - 1][j] = 'P';
						printf("Up\n");
					}
				}
				else if (key_code == KEY_DOWN || key_code == KEY_S)
				{
					if (game->map.map[i + 1][j] == '0')
					{
						game->map.map[i][j] = '0';
						game->map.map[i + 1][j] = 'P';
						printf("Down\n");
						i++;
					}
				}
			}
		}
	}
}

int	deal_key(int key_code, t_game *game)
{
	if (key_code != KEY_ESC)
		move(game, key_code);
	if (key_code == KEY_ESC)
	{
		printf("Thanks for playing!\n");
		exit(0);
	}
	return (0);
}
