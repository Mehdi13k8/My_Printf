# include "include/my.h"

int	my_putstr(char *str)
{
	t_list tmp;
	int	i = -1;
	while (str[++i] != '\0')
	{
		my_putchar(str[i], tmp);
	}
}
