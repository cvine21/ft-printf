/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:44:29 by cvine             #+#    #+#             */
/*   Updated: 2021/10/28 19:58:06 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	get_p(size_t p, char *base, int len)
{
	if (p >= 16)
		len += get_p(p / 16, base, len);
	if (p % 16 <= 9)
		len += ft_putchar(p % 16 + '0');
	else
		len += ft_putchar(base[p % 16 - 1]);
	return (len);
}

int	print_p(va_list ap)
{
	void	*p;

	p = va_arg(ap, void *);
	ft_putstr_fd("0x", 1);
	return (get_p((size_t)p, "123456789abcdef", 0) + 2);
}
