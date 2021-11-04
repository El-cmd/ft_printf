# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vloth <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 04:40:11 by vloth             #+#    #+#              #
#    Updated: 2021/10/22 16:58:23 by vloth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM		= rm -rf

NAME	= libftprintf.a

INCLUDE	= includes/ft_printf.h
SRCS	= ft_printf.c sources/ft_check_base.c sources/ft_putchar.c sources/ft_putnbr_base.c sources/ft_putstr.c sources/ft_putnbr_u.c sources/ft_strlen.c sources/ft_find_convert.c sources/ft_putnbr.c sources/ft_putnbr_base_p.c
OBJS	= $(SRCS:.c=.o)

all :	 $(NAME)

$(NAME) :  $(OBJS) $(INCLUDE)
		   $(LIB1) $(NAME) $(OBJS)
		   $(LIB2) $(NAME)

.c.o :	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

clean : 
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)

re : 	fclean all
