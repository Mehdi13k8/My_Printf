# include "include/my.h"

int	my_put_unsignednbr(unsigned int nb)
{
	t_list tmp;
	if (nb < 0)
	{
		nb = -nb;
		my_putchar('-', tmp);
	}
	if (nb > 9)
		my_put_unsignednbr(nb / 10);
	my_putchar((nb % 10) + 48, tmp);
}

void	my_ptr_unsign(va_list ap)
{
	my_put_unsignednbr(va_arg(ap, unsigned int));
}
