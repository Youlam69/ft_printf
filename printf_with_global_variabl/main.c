// #include <math.h>
// #include <stdio.h>
// #include <stdarg.h>
// #include <unistd.h>
#include "ft_printf.h"



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

#define S "%s %d %u %% %p %x s%X %u gfjgsf\n", "1" ,2147483647, -2147483618, &i, 42231, 1233512, 44
int main()
{
	// char *s = NULL;
	int i = 15;
	int j = 0;

	// i = func("%s \n", s);
	j = printf(S);
	printf("\n");
	i = ft_printf(S);
	printf("\n");
	printf("printf return : %d\nFt_printf return :  %d", j, i);
}