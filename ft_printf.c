/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:50:17 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/24 10:47:21 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		idx;
	int		count;
	va_list	ap;

	idx = 0;
	count = 0;
	va_start(ap, format);
	while (format[idx] && count != -1)
	{
		if (format[idx] == '%')
		{
			idx++;
			ft_display_arg(format[idx], ap, &count);
		}
		else
			ft_putchar(format[idx], &count);
		idx++;
	}
	va_end(ap);
	return (count);
}
