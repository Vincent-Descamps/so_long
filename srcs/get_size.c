/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:50:05 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/14 15:04:03 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	get_width(char *fd)
{
	t_game	*game;

	game->width = 0;
	while (fd[game->width] && fd[game->width] != '\n')
		game->width++;
}

void	get_height(char *fd)
{
	t_game	*game;
	int		i;
	int		j;

	game->height = 1;
	i = game->width + 1;
	while (fd[i] != 0)
	{
		j = 0;
		while (fd[i + j] != 0 && fd[i + j] != '\n')
			j++;
		i += game->width + 1;
		game->height++;
	}
}
