/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:42:17 by vdescamp          #+#    #+#             */
/*   Updated: 2022/02/23 12:52:25 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	map_init(t_game game, char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		printf("No file detected...");
}
