/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescamp <vdescamp@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:13:40 by vdescamp          #+#    #+#             */
/*   Updated: 2021/11/16 08:46:21 by vdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_check(char format, va_list ap);
int		ft_char_c(char c);
int		ft_str_s(char *str);
int		ft_int_i(int i);
int		ft_unsint_u(unsigned int u);
int		ft_percent(char c);
int		ft_hex_x(char format, unsigned int i);
int		ft_ptr_p(unsigned long long ptr);

#endif
