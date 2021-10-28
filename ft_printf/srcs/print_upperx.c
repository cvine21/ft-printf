/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_upperx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:19:20 by cvine             #+#    #+#             */
/*   Updated: 2021/10/28 19:59:02 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	get16(unsigned int x, char *base, int len)
{
	if (x >= 16)
		len += get16(x / 16, base, len);
	if (x % 16 <= 9)
		len += ft_putchar(x % 16 + '0');
	else
		len += ft_putchar(base[x % 16 - 1]);
	return (len);
}

int	print_upperx(va_list ap)
{
	unsigned int	x;

	x = va_arg(ap, unsigned int);
	return (get16(x, "123456789ABCDEF", 0));
}
