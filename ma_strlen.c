/*
** EPITECH PROJECT, 2017
** printf
** File description:
** strlen
*/

# include "include/my.h"

int	ma_strlen(char *str)
{
        int     len = 0;
        while (str[len] != '\0')
		len = len + 1;
        return (len);
}
