/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:49:25 by ylamraou          #+#    #+#             */
/*   Updated: 2022/02/15 20:49:27 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		g_g = 0;

void	chek(const char *str, va_list arg)
{
	if (*str == 'i' || *str == 'd')
		ft_putnbr_fd(va_arg(arg, int), 1);
	else if (*str == 'u')
		ft_putnbr_u(va_arg(arg, unsigned int), 1);
	else if (*str == 'c')
		ft_putchar_fd((char)va_arg(arg, int), 1);
	else if (*str == 's')
		ft_putstr_fd(va_arg(arg, char *), 1);
	else if (*str == '%')
		ft_putchar_fd('%', 1);
	else if (*str == 'p')
	{
		ft_putstr_fd("0x", 1);
		prnthex(va_arg(arg, unsigned long int), 'x');
	}
	else if (*str == 'x' || *str == 'X')
		prnthex(va_arg(arg, unsigned int), *str);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;

	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
			chek(&str[++i], arg);
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(arg);
	return (g_g);
}
