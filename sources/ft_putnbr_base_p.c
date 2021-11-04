/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:47:32 by vloth             #+#    #+#             */
/*   Updated: 2021/10/25 14:55:10 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

uint64_t	ft_puthexa_neg_p(uint64_t n)
{
	uint64_t	conversion;

	conversion = 4294967295 - n + 1;
	return (conversion);
}

void	ft_putnbr_base_p(uint64_t nbr, char *base)
{
	unsigned int	j;
	uint64_t		i;

	i = nbr;
	j = ft_strlen(base);
	if (ft_check_base(base) == 1)
	{
		if (i < 0)
		{
			i = i * -1;
			i = ft_puthexa_neg_p(i);
		}
		if (i >= j)
			ft_putnbr_base_p(i / j, base);
		ft_putchar(base[i % j]);
	}
}
