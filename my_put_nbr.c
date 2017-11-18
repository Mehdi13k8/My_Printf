# include "include/my.h"

int	my_put_nbr(int nb)
{
	t_list tmp;
	if (nb < 0)
	{
		my_putchar('-', tmp);
		nb = -nb;
	}
	if (nb > 9)
		my_put_nbr(nb / 10);
	my_putchar(nb % 10 + 48, tmp);
}
