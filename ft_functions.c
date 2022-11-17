/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:34:23 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/17 13:45:33 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len_display)
{
	write(1, &c, 1);
	len_display++;
}

void	ft_putstr(char *str, int *len_display)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		ft_putchar(str[idx], len_display);
		idx++;
	}
}
