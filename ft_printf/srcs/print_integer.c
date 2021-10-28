/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvine <cvine@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:44:23 by cvine             #+#    #+#             */
/*   Updated: 2021/10/28 19:56:26 by cvine            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_integer(va_list ap)
{
	int		d;
	int		len;
	char	*rep;

	d = va_arg(ap, int);
	rep = ft_itoa(d);
	if (!rep)
		return (0);
	ft_putstr_fd(rep, 1);
	len = ft_strlen(rep);
	free(rep);
	return (len);
}
