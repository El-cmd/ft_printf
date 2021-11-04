/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:37:41 by vloth             #+#    #+#             */
/*   Updated: 2021/10/25 15:03:33 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	ap;

	g_len = 0;
	i = 0;
	if (format == NULL)
		return (0);
	va_start(ap, format);
	while (format[i] != 0)
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			ft_find_convert(ap, format, i);
			if (format[i++] == 0)
				i++;
		}
	}
	va_end(ap);
	return (g_len);
}
