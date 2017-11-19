# include "include/my.h"

void	my_putchar_bqse(int c, char *base)
{
	t_list tmp;
	my_putchar(base[c], tmp);
}
int	my_put_nbr_EX(unsigned int nb)
{
	t_list tmp;
	char	*base = "0123456789ABCDEF";
	int b = my_strlen(base);
	int div = 1;

	if (nb < 0)
	{
		my_putchar('-', tmp);
		nb = -nb;
	}
	if (nb > b - 1)
		my_put_nbr_ex(nb / b);
	my_putchar_bqse(nb % 16, base);
}
