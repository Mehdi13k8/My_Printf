/*
** EPITECH PROJECT, 2017
** string_gestion
** File description:
** maprintf
*/

# include "include/my.h"

int	is_aff(char c)
{
	if (c < 8)
		return (1);
	if (c > 7 && c < 32)
		return (2);
	if (c == 127)
		return (4);
	return (3);
}

void	my_aff(int i, char *str)
{
	my_putstr("\\");
	my_putstr("0");
	my_putstr("0");
	my_put_nbroc(str[i]);
}

void	slash_o(int i, char *str)
{
	my_putstr("\\");
	my_putstr("0");
	my_put_nbroc(str[i]);
}

void	my_pitstr(char *str)
{
	int     i = 0;

	while (str[i] != '\0')
	{
		if (is_aff(str[i]) == 1) {
			my_aff(i, str);
		}
		else
			if (is_aff(str[i]) == 2)
			{
				slash_o(i, str);
			}
			else if (is_aff(str[i]) == 4) {
				my_putstr("\\");
				my_put_nbroc(str[i]);
			}
			else
				my_putchar(str[i]);
		i = i + 1;
	}
}

void	my_ptr_S(va_list ap)
{
	t_list tmp;

	my_pitstr(va_arg(ap, char *));
}
