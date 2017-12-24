/*
** EPITECH PROJECT, 2017
** printf
** File description:
** putnbrptr
*/

# include "include/my.h"

void	my_ptr_putnbr(va_list ap)
{
	my_put_nbr(va_arg(ap, long int));
}
