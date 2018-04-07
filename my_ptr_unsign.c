/*
** EPITECH PROJECT, 2017
** maprintf
** File description:
** unsigned
*/

# include "include/my.h"

int	my_put_unsignednbr(unsigned int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		my_putchar('-');
	}
	if (nb > 9)
		my_put_unsignednbr(nb / 10);
	my_putchar((nb % 10) + 48);
}

void	my_ptr_unsign(va_list ap)
{
	my_put_unsignednbr(va_arg(ap, unsigned int));
}
