
# include "include/my.h"

int	main(int ac, char **av)
{
	char *a = "x";
	my_put_nbr_ex(364);
	my_putchar('\n');
	my_put_nbr_ex(&a);
	my_putchar('\n');
	//my_print("%p", &a);
	//my_putchar('\n');
	printf("%p\n", &a);
	return (0);
}
