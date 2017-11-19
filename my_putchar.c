# include "include/my.h"

int	my_putchar(char c, t_list tmp)
{
	static int	a = 0;

	write(1, &c, 1);
	a = a + 1;
	tmp.i = a;
}
