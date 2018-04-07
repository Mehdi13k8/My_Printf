/*
** EPITECH PROJECT, 2017
** maprintf
** File description:
** hexa
*/

# include "include/my.h"

void	my_putchar_base(int c, char *base)
{
	my_putchar(base[c]);
}

int	my_put_nbr_ex(unsigned int nb)
{
	char	*base = "0123456789abcdef";
	int b = my_strlen(base);
	int div = 1;

	if (nb < 0)
	{
		my_putchar('-');
		nb = -nb;
	}
	if (nb > b - 1)
		my_put_nbr_ex(nb / b);
	my_putchar_base(nb % 16, base);
}
