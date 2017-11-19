# include "include/my.h"

void	my_putchar_bin_base(char *base, int a)
{
	t_list tmp;
	my_putchar(base[a], tmp);
}
int	my_put_nbrbin(unsigned int nb)
{		
	t_list tmp;
	char	*base = "01";
	int	b = my_strlen(base);
	if (nb < 0) {
		my_putchar('-', tmp);
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
