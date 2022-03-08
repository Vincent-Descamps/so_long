/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:26:25 by vdescamp          #+#    #+#             */
/*   Updated: 2022/03/08 10:21:40 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	read_map(t_game *game, int fd)
{
	char	*str;

	fd = game->fd;
	str = get_next_line(fd);
	game->map.width = ft_strlen(str);
	printf("%d", game->map.width);
	while (get_next_line(fd))
		game->map.height++;
	printf("%d", game->map.height);
}
