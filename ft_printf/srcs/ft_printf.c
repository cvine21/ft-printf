/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:27:09 by cvine             #+#    #+#             */
/*   Updated: 2021/10/28 19:53:57 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_arg(const char format, va_list ap)
{
	int	len;

	len = 0;
	if ('%' == format)
		len += ft_putchar('%');
	else if ('c' == format)
		len += print_char(ap);
	else if ('s' == format)
		len += print_str(ap);
	else if ('u' == format)
		len += print_uint(ap);
	else if ('x' == format)
		len += print_lowerx(ap);
	else if ('X' == format)
		len += print_upperx(ap);
	else if ('d' == format || 'i' == format)
		len += print_integer(ap);
	else if ('p' == format)
		len += print_p(ap);
	return (len);
}

int	ft_printf(const char *restrict format, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if ('%' == *format)
		{
			format++;
			len += print_arg(*format, ap);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			len++;
		}
		format++;
	}
	va_end(ap);
	return (len);
}
