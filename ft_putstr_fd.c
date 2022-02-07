#include "header.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	i;
	i = 0;

	if (!s)
		ft_putstr_fd("(null)", 1);
	else
		while (s[i] != '\0')
			ft_putchar_fd(s[i++], fd);
}