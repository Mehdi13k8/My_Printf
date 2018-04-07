/*
** EPITECH PROJECT, 2017
** putstr_ptr
** File description:
** maprintf
*/

# include "include/my.h"

int	my_patstr(char *str)
{
	t_list tmp;
	int	i = 0;

	while (str[i] != '\0')
	{
		my_putchar(str[i]);
		i = i + 1;
	}
}

void	my_ptr_putstr(va_list ap)
{
	my_patstr(va_arg(ap, char *));
}
