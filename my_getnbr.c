/*
** EPITECH PROJECT, 2017
** maprintf
** File description:
** magetnbr
*/

# include "include/my.h"

int	isnum(char x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

int	isop(char a)
{
	if (a == '-')
		return (3);
}

int	my_getnbr(char *str)
{
	int	i = 0;
	int    nb = 0;
	int    op = 0;

	while (str[i] != '\0')
	{
		if (isnum(str[i]) == 1)
			nb = ((nb * 10) + str[i] - 48);
		if (isop(str[i]) == 3)
			op = op + 1;
		i++;
	}
	if (op % 2 > 0)
		nb = -nb;
	return (nb);
}
