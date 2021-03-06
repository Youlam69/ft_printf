/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:30:41 by ylamraou          #+#    #+#             */
/*   Updated: 2022/02/18 14:30:43 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define TAB "0123456789abcdef"
# include <math.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

extern int	g_g;
int			ft_printf(const char *str, ...);
void		ft_putnbr_u(unsigned int n, int fd);
void		prnthex(unsigned long int nbr, char x);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);

#endif
