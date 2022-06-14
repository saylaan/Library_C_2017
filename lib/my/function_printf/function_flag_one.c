/*
** EPITECH PROJECT, 2017
** little_func_two.c
** File description:
** little func
*/

#include "../../../include/my.h"

void flag_x(va_list list)
{
    base_n(va_arg(list, int), 16, 0);
}

void flag_upper_x(va_list list)
{
    base_n(va_arg(list, int), 16, 1);
}

void flag_o(va_list list)
{
    base_n(va_arg(list, int), 8, 1);
}

void flag_b(va_list list)
{
    base_n(va_arg(list, int), 2, 1);
}

void flag_p(va_list list)
{
    my_putchar('0');
    my_putchar('x');
    base_hexa_long(va_arg(list, long), 16);
}
