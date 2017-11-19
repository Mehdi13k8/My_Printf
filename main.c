#include <stdio.h>

//void    my_printf(char *str, ...);

int	main()
{
	char str[4] = "toto";
	strcpy(str, "toto");
	str[1] = 127;
	my_printf("%S", str);
	//my_printf("%X%s %x%d% i /n", 322323,"wow",100,100,100);
	//printf("%X%s %x%d% i /n", 322323,"wow",100,100,100);
	//my_printf("%d \n",0x800000);
	//printf("%d", 0x8000000);
}
