# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylamraou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 14:30:57 by ylamraou          #+#    #+#              #
#    Updated: 2022/02/18 14:31:01 by ylamraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFLAGS = -Wall -Wextra -Werror
AR = ar rc
CC = gcc
FCTS = ft_printf.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	putnbr_u.c \
	prnthex.c

OBJS = $(FCTS:.c=.o)

NAME = libftprintf.a

$(NAME): $(OBJS)
	@$(AR) $@ $^

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all re
