/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:39:40 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/17 13:45:30 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_display_arg(char c, va_list ap, int *len_display)
{
	if (c == '%')
		ft_putchar('%', len_display);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), len_display);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), len_display);
	else if (c == 'd')
		ft_putstr(ft_itoa(va_arg(ap, int)), len_display);
}
