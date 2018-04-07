/*
** EPITECH PROJECT, 2017
** maprintf
** File description:
** exa
*/

# include "include/my.h"

void	my_patchar_base(int c, char *base)
{
	t_list tmp;
	my_putchar(base[c]);
}

int	my_pat_nbr_ex(long int nb)
{
	t_list tmp;
	char    *base = "0123456789abcdef";
	int b = my_strlen(base);

	if (nb < 0)
	{
		my_putchar('-');
		nb = -nb;
	}
	if (nb > b - 1)
		my_pat_nbr_ex(nb / b);
	my_patchar_base(nb % 16, base);
}

void	my_ptr_adhexa(va_list ap)
{
	t_list tmp;
	my_putchar('0');
	my_putchar('x');
	my_pat_nbr_ex(va_arg(ap, long int));
}
