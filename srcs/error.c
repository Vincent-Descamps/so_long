/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:59:54 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/17 12:45:12 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_error(int n)
{
	if (n == 1)
		ft_printf("Error\n** Invalid Number of Arguments. **");
	if (n == 2)
		ft_printf("Error\n** Make sure the Map is a .ber file. **");
	if (n == 3)
		ft_printf("Error\n** Cannot find File. **");
	if (n == 4)
		ft_printf("Error\n** Map is not a rectangle. **");
	if (n == 5)
		ft_printf("Error\n** Wrong Character in the Walls of the Map. **");
	if (n == 6)
		ft_printf("Error\n** Unknown Character in the structure of the Map. **");
	if (n == 7)
		ft_printf("Error\n** Map File is incomplete, Charaters are missing **");
	exit (1);
	return (0);
}
