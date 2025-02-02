/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:39:08 by vloth             #+#    #+#             */
/*   Updated: 2021/10/25 15:00:36 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		g_len;
int		ft_strlen(const char *str);
int		ft_check_base(char *base);
void	ft_putchar(char b);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putstr(const char *str);
void	ft_putnbr(int n);
void	ft_putnbr_u(long int n);
void	ft_find_convert(va_list ap, const char *str, int i);
int		ft_printf(const char *format, ...);
void	ft_putnbr_base_p(uint64_t nbr, char *base);

#endif
