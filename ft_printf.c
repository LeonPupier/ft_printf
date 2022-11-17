/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:50:17 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/17 13:45:26 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *content, ...)
{
	int		idx;
	int		len_diplay;
	va_list	ap;

	idx = 0;
	len_diplay = 0;
	va_start(ap, content);
	while (content[idx])
	{
		if (content[idx] == '%')
		{
			idx++;
			ft_display_arg(content[idx], ap, &len_diplay);
		}
		else
			ft_putchar(content[idx], &len_diplay);
		idx++;
	}
	va_end(ap);
	return (len_diplay);
}

int	main(void)
{
	int	len_original;
	int	len_custom;

	len_original = printf("Coucou %d\n", 42);
	len_custom = ft_printf("Coucou %d\n", 42);
	printf("\nOriginal len:	%d\nCustom len:	%d\n", len_original, len_custom);
}
