/*
** EPITECH PROJECT, 2017
** putchar_ptr
** File description:
** maprintf
*/

# include "include/my.h"

void	my_ptr_putchar(va_list ap)
{
	my_putchar(va_arg(ap, int));
}
