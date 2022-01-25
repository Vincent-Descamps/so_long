/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:06:10 by vdescamp          #+#    #+#             */
/*   Updated: 2022/01/25 09:26:21 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"
//# include "../libft/libft.h"
# include </usr/local/include/mlx.h>
# include </usr/local/include/X11/X.h>
# include </usr/local/include/X11/keysym.h>

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 300

typedef	struct s_img
{
	void	*mlx_img;
	char	*addr;
	int		bpp; /* bits per pixel */
	int		line_len;
	int		endian;
}	t_img;

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	t_img	img;
}	t_data;

typedef struct s_rect
{
	// x & y coordinates correspond to upper left corner of rectangle.
	int	x;
	int	y;
	int	width;
	int	height;
	int	color;
}	t_rect;


#endif
