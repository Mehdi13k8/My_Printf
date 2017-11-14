# include "include/my.h"

void	my_putchar(char c)
{
	write(1,&c,1);
}
void     my_ptr_putchar(va_list ap)
{
	my_putchar(va_arg(ap,int));
	//my_putchar('c');
}
