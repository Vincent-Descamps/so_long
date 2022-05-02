/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:27:43 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/16 08:51:24 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char format, va_list ap)
{
	int		j;

	j = 0;
	if (format == 'c')
		return (ft_char_c(va_arg(ap, int)));
	else if (format == 's')
		return (ft_str_s(va_arg(ap, char *)));
	else if (format == 'i' || format == 'd')
		return (ft_int_i(va_arg(ap, int)));
	else if (format == 'u')
		return (ft_unsint_u(va_arg(ap, unsigned int)));
	else if (format == '%')
		return (ft_percent('%'));
	else if (format == 'x' || format == 'X')
		return (ft_hex_x(format, va_arg(ap, unsigned int)));
	else if (format == 'p')
		return (ft_ptr_p(va_arg(ap, unsigned long long)));
	return (0);
}
