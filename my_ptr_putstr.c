# include "include/my.h"

int     my_ptr_putstr(va_list ap)
{
	my_putstr(va_arg(ap, char*));
}
