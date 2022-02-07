#include "header.h"

void	prnthex(unsigned long int nbr, char x)
{
	char tab[17] = "0123456789abcdef";

	if (nbr < 16)
	{
		if (x == 'x')
			ft_putchar_fd(tab[nbr], 1);
		else
		{
			if (nbr >= 10 && nbr < 16)
				ft_putchar_fd(tab[nbr] - 32, 1);
			else
				ft_putchar_fd(tab[nbr], 1);
		}
	}
	if (nbr >= 16)
	{
		prnthex(nbr / 16, x);
		if (x == 'x')
			ft_putchar_fd(tab[nbr % 16], 1);
		else
		{
			if (nbr % 16 >= 10 && nbr % 16 < 16)
				ft_putchar_fd(tab[nbr % 16] - 32, 1);
			else
				ft_putchar_fd(tab[nbr % 16], 1);
		}
	}
}

// void prnthex(int nbr, char x)
// {
// 	char tab[17] = "0123456789abcdef";
// 	if (nbr < 16)
// 	{
// 		if (x == 'x')
// 			ft_putchar_fd(tab[nbr], 1);
// 		else
// 			ft_putchar_fd(tab[nbr], 1);
// 	}

// 	if (nbr >= 16)
// 	{
// 		prnthex(nbr / 16);
// 		if (x == 'x')
// 			ft_putchar_fd(tab[nbr % 16], 1);
// 		else
// 			ft_putchar_fd(tab[nbr % 16] + 32, 1);
// 	}
// }
