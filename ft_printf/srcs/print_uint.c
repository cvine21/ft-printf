/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:19:33 by cvine             #+#    #+#             */
/*   Updated: 2021/10/28 19:58:25 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	putnbr_uint(unsigned int n, int len)
{
	if (0 <= n && n <= 9)
		len += ft_putchar(n + 48);
	else
	{
		len += putnbr_uint(n / 10, len);
		putnbr_uint(n % 10, ++len);
	}
	return (len);
}

int	print_uint(va_list ap)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	return (putnbr_uint(n, 0));
}
