/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** lib
*/

#ifndef MY_H_
#define MY_H_

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct	s_list
{
	int	i;
}t_list;

int	my_putchar(char c);
int	ma_strlen(char *str);
void	my_ptr_putchar(va_list ap);
void	my_ptr_putstr(va_list ap);
void	my_ptr_putnbr(va_list ap);
void	my_ptr_hexa(va_list ap);
void	my_ptr_binary(va_list ap);
void	my_ptr_adhexa(va_list ap);
void	my_ptr_HEXA(va_list ap);
void	my_ptr_S(va_list ap);
void	my_ptr_octale(va_list ap);
void	my_ptr_unsign(va_list ap);
void	my_ptr_modulo(va_list ap);
int	my_put_nbroc(int nb);
void	my_ptr_octale(va_list ap);
int	my_printf(char *str, ...);
int	my_put_nbr(long int nb);
int	my_put_nbr_ex(unsigned int nb);
int	my_put_nbr_EX(unsigned int nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
//int	my_getnbr(char *str);

# endif /* MY_H_ */
