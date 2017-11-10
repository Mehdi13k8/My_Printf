# include "include/my.h"
# include <stdarg.h>

int	my_compar(char x)
{
  int	i = 0;
  char  *a = "csdixSp";
  void	**fptr;
  while (a[i] != '\0')
  {
	  if (a[i] == x)
		  fptr[i];
		  //return (i);
	  i = i + 1;
  }
  fptr[0] = &ptr_my_putchar;
  fptr[1] = &ptr_my_putstr;
  fptr[2] = ;
  fptr[3] = ;
  fptr[4] = ;
  fptr[5] = ;
  //  return (84);
}
int	my_print(char *str, ...)
{
	int	i = 0;
	va_list	ap;
	
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%') {
			i = i + 1;
			my_compar(str[i]);
			/*if (str[i] == 's') {
			  my_putstr(va_arg(ap, char*));
			  }*/
			/*if (str[i] == 'd') {
			  my_put_nbr(va_arg(ap, int));
			  }*/
			/*if (str[i] == 'p') {
			  my_putchar("0");
			  my_put_nbr_ex(va_arg(ap, unsigned long long int));
			  }*/
		}
		i++;
	}
	va_end(ap);
	return (0);
}
