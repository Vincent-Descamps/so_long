/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ber_extension.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:29:53 by vdescamp          #+#    #+#             */
/*   Updated: 2022/03/08 12:01:36 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ber_extension(char *str)
{
	char	*ext;
	char	*ret;

	ext = ".ber";
	ret = strrchr(str, '.');
	if (ft_strcmp(ret, ext))
		return (1);
	return (0);
}
