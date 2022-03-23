#ifndef HEADER_H
# define HEADER_H
#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int g;
int func(char *str, ...);
void	ft_putnbr_u(unsigned int n, int fd);
void	prnthex(unsigned long int nbr, char x);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
// void	ft_putnbr_fd(int n, int fd);

#endif