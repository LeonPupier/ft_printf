/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:39:40 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/24 10:51:01 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_display_arg(char c, va_list ap, int *count)
{
	if (c == '%')
		ft_putchar('%', count);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), 16, "0123456789abcdef", count);
	else if (c == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), 16, "0123456789ABCDEF", count);
	else if (c == 'u')
		ft_putnbr_base(va_arg(ap, unsigned int), 10, "0123456789", count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_base(va_arg(ap, unsigned long long int), 16,
			"0123456789abcdef", count);
	}
}
