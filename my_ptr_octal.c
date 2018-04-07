/*
** EPITECH PROJECT, 2017
** maprintf
** File description:
** octale
*/

# include "include/my.h"

void	my_putchar_bise(char *base, int a)
{
	my_putchar(base[a]);
}

int	my_put_nbroc(int nb)
{
	char	*base = "01234567";
	int	b = my_strlen(base);

	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	if (nb > b - 1)
		my_put_nbroc(nb / b);
	my_putchar_bise(base, nb % 8);
}

void	my_ptr_octale(va_list ap)
{
	my_put_nbroc(va_arg(ap, int));
}
