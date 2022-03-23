/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:50:19 by ylamraou          #+#    #+#             */
/*   Updated: 2022/02/15 20:50:22 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr > 9)
	{
		ft_putnbr_u(nbr / 10, fd);
		ft_putchar_fd((nbr % 10) + 48, fd);
	}
	else
		ft_putchar_fd(nbr + 48, fd);
}
