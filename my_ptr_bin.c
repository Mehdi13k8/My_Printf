/*
** EPITECH PROJECT, 2017
** maprintf
** File description:
** base
*/

# include "include/my.h"

void	my_putchar_bin_base(char *base, int a)
{
	my_putchar(base[a]);
}

int	my_put_nbrbin(unsigned int nb)
{
	t_list tmp;
	char	*base = "01";
	int	b = my_strlen(base);

	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	if (nb > b - 1)
		my_put_nbrbin(nb / b);
	my_putchar_bin_base(base, nb % b);
}

void	my_ptr_binary(va_list ap)
{
	my_put_nbrbin(va_arg(ap, unsigned int));
}
