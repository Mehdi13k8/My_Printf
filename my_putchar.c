/*
** EPITECH PROJECT, 2017
** printf
** File description:
** putchar
*/

# include "include/my.h"

int	my_putchar(char c)
{
	static int	a = 0;

	write(1, &c, 1);
}
