/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpupier <lpupier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:52:33 by lpupier           #+#    #+#             */
/*   Updated: 2022/11/17 14:23:29 by lpupier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# include "libft.h"

// ft_functions.c
void	ft_putchar(char c, int *len_display);
void	ft_putstr(char *str, int *len_display);

// ft_display_arg.c
void	ft_display_arg(char c, va_list ap, int *len_display);

#endif