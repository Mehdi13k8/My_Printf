# include "include/my.h"
# include <stdarg.h>

int	my_compar(char ab)
{
  int	i = 0;
  char  *a = "csdixSp";
  while (a[i] != '\0')
    {
      if (a[i] == ab)
	return (i);
	i = i + 1;
    }
  //  return (84);
}
int	my_print(char *str, ...)
{	
<<<<<<< HEAD
	int	i = 0;
	va_list	ap;

	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%') {
			i = i + 1;
			if (str[i] == 's') {
				my_putstr(va_arg(ap, char*));
			}
			if (str[i] == 'd') {
				my_put_nbr(va_arg(ap, int));
			}
			if (str[i] == 'p') {
				my_putchar("0");
				my_put_nbr_ex(va_arg(ap, unsigned long long int));
			}
		}
		i++;
	}
	va_end(ap);
	return (0);
=======
  int	i = 0;
  va_list	ap;
  
  va_start(ap, str);
  while (str[i] != '\0')
    {
      //if (str[i] == '%') {
      //i = i + 1;
      if (my_compar(str[i]) == 84)
	return (84);
      //if (my_compar(str[i]) == )
      if (str[i] == 's') {
	my_putstr(va_arg(ap, char*));
      }
      if (str[i] == 'd') {
	my_put_nbr(va_arg(ap, int));
      }
      i++;
    }
  va_end(ap);
  return (0);
>>>>>>> bba94b68af66612c0a49d77c344f474df74aae3d
}

