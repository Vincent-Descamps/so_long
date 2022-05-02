/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:59:54 by vdescamp          #+#    #+#             */
/*   Updated: 2022/05/02 13:41:12 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	ft_error(int n)
{
	if (n == 1)
		printf("Error\n** Invalid Number of Arguments. **");
	if (n == 2)
		printf("Error\n** Make sure the Map is a .ber file. **");
	if (n == 3)
		printf("Error\n** Cannot find File. **");
	if (n == 4)
		printf("Error\n** Map is not a rectangle. **");
	if (n == 5)
		printf("Error\n** Wrong Character in the Walls of the Map. **");
	if (n == 6)
		printf("Error\n** Unknown Character in the structure of the Map. **");
	if (n == 7)
		printf("Error\n** Map File is incomplete, Some charaters are missing **");
	exit (1);
	return (0);
}
