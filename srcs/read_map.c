/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:26:25 by vdescamp          #+#    #+#             */
/*   Updated: 2022/03/10 10:33:08 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	map_size(t_game *game, char *file)
{
	char	*str;
	int		fd;

	str = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		printf("cannot find file");
	str = get_next_line(fd);
	game->map.width = ft_strlen(str);
	free (str);
	while (get_next_line(fd))
		game->map.height++;
}

void	read_map(t_game *game, char *file)
{
	int		fd;
	int		i;

	i = -1;
	map_size(game, file);
	printf("%d....%d\n", game->map.width, game->map.height);
	game->map.map = (char **)malloc(sizeof(char *) * game->map.height);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		printf("cannot find file");
	while (i++ < game->map.height)
		game->map.map[i] = get_next_line(fd);
	printf("%s", game->map.map[0]);
	printf("%s", game->map.map[1]);
	printf("%s", game->map.map[2]);
	printf("%s", game->map.map[3]);
	printf("%s", game->map.map[4]);
	printf("%d", game->map.height);
}
