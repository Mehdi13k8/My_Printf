# include "include/my.h"
# include <stdarg.h>

int	ma_strlen(char *str)
{
	int	len = 0;
	while (str[len] != '\0')
		len = len + 1;
	return (len);
}
void    creat_tab(va_list ap, void (*tab[12])(va_list ap))
{
	tab[10] = &my_ptr_S;
	tab[0] = &my_ptr_putchar;
	tab[1] = &my_ptr_putstr;
	tab[2] = &my_ptr_putnbr;
	tab[8] = &my_ptr_putnbr;
	tab[3] = &my_ptr_hexa;
	tab[4] = &my_ptr_modulo;
	tab[5] = &my_ptr_adhexa;
	tab[6] = &my_ptr_octale;
	tab[7] = &my_ptr_binary;
	tab[9] = &my_ptr_unsign;
}

int	my_compar(char x)
{
	int	i = 0;
	char	*a = "csix%pobduS";
	
	while (i < 12)
	{
		if (a[i] == x) {
			return (i);
		}
		else
			i = i + 1;
		if (i == 12) {
			return (i);
		}
	}
}
int	my_flag_check(va_list ap, void (*tab[12])(va_list ap), int flagn, char a)
{
	t_list tmp;
	if (flagn <= 11 && flagn > 0) {
		creat_tab(ap, tab);
		tab[flagn](ap);
	}
	else {
		my_putstr("% ");
		my_putchar(a, tmp);
	}
}

int	my_printf(char *str, ...)
{
	t_list	tmp;
	tmp.i = 0;
	int	num;
	int	i = 0;
	int     flagn;
	void (*tab[11])(va_list ap);
	va_list	ap;

	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%') {
			i++;
			while (str[i] == ' ' || str[i] == ('#'))
				i = i + 1;
			flagn = my_compar(str[i]);
			my_flag_check(ap, tab, flagn, str[i]);
		}
		else
			my_putchar(str[i],tmp);
		i++;
	}
	num = tmp.i;
	va_end(ap);
	return (num);
}
