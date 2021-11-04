/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_convert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:09:42 by vloth             #+#    #+#             */
/*   Updated: 2021/10/25 14:57:10 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_find_convert(va_list ap, const char *str, int i)
{
	if (str[i] == 's')
		ft_putstr(va_arg(ap, char *));
	else if (str[i] == 'c')
		ft_putchar(va_arg(ap, int));
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (str[i] == '%')
		ft_putchar('%');
	else if (str[i] == 'u')
		ft_putnbr_u(va_arg(ap, unsigned int));
	else if (str[i] == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (str[i] == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (str[i] == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base_p(va_arg(ap, uint64_t), "0123456789abcdef");
	}
}
