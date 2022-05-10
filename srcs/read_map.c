/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:26:25 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/10 14:27:51 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	map_size(t_game *game, char *file)
{
	char	*str;
	int		fd;
	int		height;
	int		width;

	str = 0;
	height = 1;
	width = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_error(3);
	str = get_next_line(fd);
	width = ft_strlen(str);
	free (str);
	while (get_next_line(fd))
		height++;
	close(fd);
	game->map.width = width - 1;
	game->map.height = height;
}

void	read_map(t_game *game, char *file)
{
	int		fd;
	int		i;

	i = 0;
	map_size(game, file);
	//printf("%d....%d\n", game->map.width, game->map.height);
	game->map.map = (char **)malloc(sizeof(char *) * game->map.height);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_error(3);
	while (i < game->map.height)
		game->map.map[i++] = get_next_line(fd);
	i = 0;
	/*while (i < game->map.height)
		printf("%s", game->map.map[i++]);
		*/
}
