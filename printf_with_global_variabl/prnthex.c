/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prnthex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:50:50 by ylamraou          #+#    #+#             */
/*   Updated: 2022/02/15 20:50:52 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prinminithex(unsigned long int nbr, char x)
{
	if (x == 'x')
		ft_putchar_fd(TAB[nbr], 1);
	else
	{
		if (nbr >= 10 && nbr < 16)
			ft_putchar_fd(TAB[nbr] - 32, 1);
		else
			ft_putchar_fd(TAB[nbr], 1);
	}
}

void	prnthex(unsigned long int nbr, char x)
{
	if (nbr < 16)
		prinminithex(nbr, x);
	if (nbr >= 16)
	{
		prnthex(nbr / 16, x);
		if (x == 'x')
			ft_putchar_fd(TAB[nbr % 16], 1);
		else
		{
			if (nbr % 16 >= 10 && nbr % 16 < 16)
				ft_putchar_fd(TAB[nbr % 16] - 32, 1);
			else
				ft_putchar_fd(TAB[nbr % 16], 1);
		}
	}
}
