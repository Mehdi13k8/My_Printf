# include "include/my.h"
# include <stdarg.h>

int	my_tab(int i)
{
	void	(*tab[10])(va_list);
	tab[0] = &my_octal_aff(va_list);
	tab[1] = &my_ptr_putchar(va_list);
	tab[2] = &my_ptr_putstr(va_list);
	tab[3] = &my_ptr_putnbr(va_list);
	tab[4] = &my_ptr_hexa(va_list);
	tab[5] = &my_ptr_modulo(va_list);
	tab[6] = &my_ptr_adress(va_list);
	tab[7] = &my_octal_aff(va_list);
	tab[8] = &my_ptr_binary(va_list);
	tab[9] = &my_ptr_putnbr(va_list);
	tab[10] = &my_octal(va_list);
	tab[0] = NULL;
}
int	my_compar(char x, va_list ap)
{
	int	i = 0;
	char  *a = "Scsix%pubdo";
       	void	**fptr;

	while (a[i] != '\0')
	{
		if (a[i] == x) {
			return (i);
		}
		i = i + 1;
	}
}

int	my_print(char *str, ...)
{
	int	i = 0;
	va_list	ap;
   
       	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%') {
			i = i + 1;
			my_compar(str[i], ap);
			//if (str[i] == 's') {
			//my_putstr(va_arg(ap, char*));
			//}
			/*if (str[i] == 'd') {
			  my_put_nbr(va_arg(ap, int));
			  }*/
			//if (str[i] == 'x') {
				//my_putchar('0');
				//my_putchar('x');
			//my_put_nbr_ex(va_arg(ap, unsigned int));
		}
		i++;
	}
	va_end(ap);
	return (0);
}
