/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 05:00:40 by vloth             #+#    #+#             */
/*   Updated: 2021/10/25 14:56:31 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

long int	ft_puthexa_neg(long int n)
{
	long int	conversion;

	conversion = 4294967295 - n + 1;
	return (conversion);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			j;
	long int	i;

	i = nbr;
	j = ft_strlen(base);
	if (ft_check_base(base) == 1)
	{
		if (i < 0)
		{
			i = i * -1;
			i = ft_puthexa_neg(i);
		}
		if (i >= j)
			ft_putnbr_base(i / j, base);
		ft_putchar(base[i % j]);
	}
}
