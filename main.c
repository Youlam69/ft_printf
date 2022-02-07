#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "header.h"

// void	ft_putnbr_fd(int n, int fd)
// {
// 	long int	nbr;

// 	nbr = n;
// 	if (nbr < 0)
// 	{
// 		nbr *= -1;
// 		ft_putchar_fd('-', fd);
// 	}
// 	if (nbr > 9)
// 	{
// 		ft_putnbr_fd(nbr / 10, fd);
// 		ft_putchar_fd((nbr % 10) + 48, fd);
// 	}
// 	else
// 		ft_putchar_fd(nbr + 48, fd);
// }
#define S "%s %d %u %% ds%p fdsfs%x s%X %u gfjgsf\n", "ddd",121221, 5465,&i,4223241,-1233512, -45844
int main()
{
	char *s = NULL;
	int i = 0;
	int j = 0;

	// i = func("%s \n", s);
	j = printf(S);
	printf("\n");
	i = func(S);
	printf("\n");
	printf("printf return : %d\nFt_printf return :  %d", j, i);
}