# include "include/my.h"
# include <stdarg.h>

int	my_print(char *str, ...)
{	
	int	i = 0;
	va_list	ap;

	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%') {
			i = i + 1;
			if (str[i] == 's') {
				my_putstr(va_arg(ap, char*));
			}
			if (str[i] == 'd') {
				my_put_nbr(va_arg(ap, int));
			}
			if (str[i] == 'p') {
				my_putchar("0");
				my_put_nbr_ex(va_arg(ap, unsigned long long int));
			}
		}
		i++;
	}
	va_end(ap);
	return (0);
}
