/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:50:05 by vdescamp          #+#    #+#             */
/*   Updated: 2022/03/04 16:40:10 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

static void	get_width(char *fd)
{
	t_game	*game;

	while (fd[game->width] && fd[game->width] != '\n')
		game->width++;
}

static void	get_height(char *fd)
{
	t_game	*game;
	int		i;
	int		j;

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

void	get_size(char *fd)
{
	get_width(fd);
	get_height(fd);
}
