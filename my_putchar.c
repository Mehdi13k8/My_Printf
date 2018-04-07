/*
** EPITECH PROJECT, 2017
** maprintf
** File description:
** maputchar
*/

# include "include/my.h"

int	my_putchar(char c)
{
	static int	a = 0;

	write(1, &c, 1);
}
