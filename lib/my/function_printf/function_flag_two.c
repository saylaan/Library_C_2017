/*
** EPITECH PROJECT, 2017
** little_func.c
** File description:
** small functions
*/

#include "../../../include/my.h"

void flag_d(va_list list)
{
    my_put_nbr(va_arg(list,int));
}

void flag_i(va_list list)
{
    my_put_nbr(va_arg(list,int));
}

void flag_u(va_list list)
{
    my_unsign_put_nbr(va_arg(list, unsigned int));
}

void flag_c(va_list list)
{
    my_putchar(va_arg(list, int));
}

void flag_s(va_list list)
{
    int i = 0;
    char *str = va_arg(list, char*);

    if (str[i] == '\0')
        my_putstr("(null)");
    else
        my_putstr(str);
}
