#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "header.h"


void chek(char *str, va_list arg)
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

int func(char *str, ...)
{
	va_list argmnt;
	va_start(argmnt, str);
	while (*str)
	{
		if (*str == '%')
			chek(++str, argmnt);
		else
			ft_putchar_fd(*str, 1);	
		str++;
	}
	va_end(argmnt);
	return g;
}