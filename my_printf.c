# include "include/my.h"
# include <stdarg.h>

int	ma_strlen(char *str)
{
	int	len = 0;
	while (str[len] != '\0')
		len = len + 1;
	return (len);
}
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
	tab[8] = &my_ptr_binary;
	  /*tab[10] = &my_octal(va_list);*/
	//my_putchar(i + 48);
	//tab[11] = NULL;
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
		if (i == 12) {
			return (i);
		}
		i = i + 1;
	}
}
int	my_flag_check(va_list ap, void (*tab[11])(va_list ap), int flagn, char a)
{
	t_list tmp;
	if (flagn <= 11 && flagn > 0) {
		creat_tab(ap, tab);
		tab[flagn](ap);
		//if (flag
		//my_putchar(ma_strlen(va_arg(ap, char*)));
	}
	else {
		//my_putchar(a, tmp);
		return (84);
	}
}
int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		if (my_compar(c) == 0)
			return (84);
		else
			return (1);
}
int	go_back_tomod(char *str, int i)
{
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
		if (str[i] == '\n')
			my_putchar('\n', tmp);
		//i = i + 1;
		if (str[i] == '%') {
			while (str[i] == ' ' || str[i] == ('#'))
				i = i + 1;
			i++;
			flagn = my_compar(str[i]);
			//my_put_nbr(flagn);
			//my_putchar('\n', tmp);
			
			if (is_alpha(str[i]) == 84) {
				go_back_tomod(str, i);
				my_putchar(str[i], tmp);
				
			}
			//else
			//	i++;
			my_flag_check(ap, tab, flagn, str[i]);
		}
		my_putchar(str[i],tmp);
		//my_flag_check(ap, tab, flagn, str[i]);
		i++;
	}
	//my_put_nbr(tmp.i);
	num = tmp.i;
	va_end(ap);
	//my_put_nbr(tmp.i);
	return (num);
}
