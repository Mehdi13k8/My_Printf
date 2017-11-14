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

void	my_putchar(char c);
void	my_ptr_putchar(va_list ap);
void	my_ptr_putstr(va_list ap);
void	my_ptr_putnbr(va_list ap);
void	my_ptr_hexa(va_list ap);
void	my_ptr_adhexa(va_list ap);
void	my_ptr_modulo(va_list ap);
int	my_print(char *str, ...);
int	my_put_nbr(int nb);
int	my_put_nbr_ex(unsigned int nb);
int	my_putstr(char *str);
int	my_strlen(char *str);
//int	my_getnbr(char *str);

# endif /* MY_H_ */
