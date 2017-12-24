/*
** EPITECH PROJECT, 2017
** printf
** File description:
** longint
*/

# include "include/my.h"

int	my_put_nbr(long int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + 48);
}
