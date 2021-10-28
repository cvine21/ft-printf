/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:19:38 by cvine             #+#    #+#             */
/*   Updated: 2021/10/28 20:00:51 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	print_char(va_list ap);
int	print_str(va_list ap);
int	print_uint(va_list ap);
int	print_lowerx(va_list ap);
int	print_upperx(va_list ap);
int	print_integer(va_list ap);
int	print_p(va_list ap);
#endif