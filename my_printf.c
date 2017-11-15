# include "include/my.h"
# include <stdarg.h>

void    creat_tab(va_list ap, void (*tab[11])(va_list ap))
{
	//void	(*tab[2])(va_list ap);
	//tab[i];
	//tab[0] = &my_octal_aff(va_list);
	tab[1] = &my_ptr_putchar;
	tab[2] = &my_ptr_putstr;
	tab[3] = &my_ptr_putnbr;
	tab[9] = &my_ptr_putnbr;
	tab[4] = &my_ptr_hexa;
	tab[5] = &my_ptr_modulo;
	tab[6] = &my_ptr_adhexa;
	tab[7] = &my_ptr_octale;
	/*tab[8] = &my_ptr_binary(va_list);
	  tab[10] = &my_octal(va_list);*/
	//my_putchar(i + 48);
	//tab[0] = NULL;
}
int	my_compar(char x)
{
	int	i = 0;
	char	*a = "Scsix%pubdo";

	while (a[i] != '\0')
	{
		if (a[i] == x) {
			return (i);
		}
		i = i + 1;
	}
}

int	my_printf(char *str, ...)
{
	int	i = 0;
	int     flagn;
	void (*tab[11])(va_list ap);
	va_list	ap;

       	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			my_putchar('\n');
		if (str[i] == '%') {
			i = i + 1;
			creat_tab(ap,tab);
			flagn = my_compar(str[i]);
			//		my_putchar(flagn + 48);
			tab[flagn](ap);
		}
		i++;
	}
	va_end(ap);
	return (0);
}
//my_compar(str[i], ap);
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
