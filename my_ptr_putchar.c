# include "include/my.h"

void     my_ptr_putchar(va_list ap)
{
	t_list tmp;
	my_putchar(va_arg(ap,int), tmp);
}
