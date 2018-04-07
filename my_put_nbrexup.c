/*
** EPITECH PROJECT, 2017
** maprintf
** File description:
** hexa
*/

# include "include/my.h"

void	my_putchar_bqse(int c, char *base)
{
	my_putchar(base[c]);
}

int	my_put_nbr_EX(unsigned int nb)
{
	char	*base = "0123456789ABCDEF";
	int b = my_strlen(base);
	int div = 1;

	if (nb < 0)
	{
		my_putchar('-');
		nb = -nb;
	}
	if (nb > b - 1)
		my_put_nbr_ex(nb / b);
	my_putchar_bqse(nb % 16, base);
}
