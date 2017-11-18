# include "include/my.h"

int	my_putchar(char c, t_list tmp)
{
	//t_list tmp;
	static int	a = 0;
	//static
	write(1, &c, 1);
	a = a + 1;
	tmp.i = a;
	//my_put_nbr(tmp.i);
//return (i);
}
