# include "include/my.h"

int     is_aff(char c)
{
	if (c < 32)
		return (1);
	if(c > 126)
		return (2);
	return (3);
}
void    my_pitstr(char *str)
{
	t_list tmp;
	int     i = 0;
	while (str[i] != '\0')
	{
		if (is_aff(str[i]) == 1) {
			my_putstr("\\");
			my_putstr("0");
			my_put_nbroc(str[i]);
		}
		else
			if (is_aff(str[i]) == 2)
			{
				my_putstr("\\");
				//my_putstr("00");
				my_put_nbroc(str[i]);
			}
			else
				my_putchar(str[i], tmp);
		i = i + 1;
	}
}
//void  my_func(va_
void    my_ptr_S(va_list ap)
{
	//my_put_nbr(va_arg(ap, int));
	t_list tmp;
	my_pitstr(va_arg(ap, char*));
}
