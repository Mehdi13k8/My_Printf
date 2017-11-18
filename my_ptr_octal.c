# include "include/my.h"

void	my_putchar_bise(char *base, int a)
{
	t_list tmp;
	
	my_putchar(base[a], tmp);
}
int	my_put_nbroc(int nb)
{
	t_list tmp;
	char	*base = "01234567";
	int	b = my_strlen(base);
	if (nb < 0) {
		my_putchar('-', tmp);
		nb = -nb;
	}
	if (nb > b - 1)
		my_put_nbroc(nb / b);
	my_putchar_bise(base, nb % 8);
	//my_putchar(nb% 10 + 48);
}
void	my_ptr_octale(va_list ap)
{
	my_put_nbroc(va_arg(ap, int));
}
