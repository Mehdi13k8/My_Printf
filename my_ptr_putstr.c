# include "include/my.h"

void	my_putzchar(char c)
{
	write(1,&c,1);
}
int	my_patstr(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
	{
		my_putzchar(str[i]);
		i = i + 1;
	}
}
void	my_ptr_putstr(va_list ap)
{
	my_patstr(va_arg(ap, char*));
}
