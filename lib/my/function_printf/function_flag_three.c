/*
** EPITECH PROJECT, 2017
** little_func_three.c
** File description:
** little functions
*/

#include "../../../include/my.h"

void flag_perc(va_list list)
{
    my_putchar('%');
}

int not_print(char c)
{
    if (c < 32 || c >= 127)
        return (1);
    return (0);
}

void put_zero(char *str, int i)
{
    int nb = 0;

    if (str[i] >= 0 && str[i] < 8) {
        my_putchar('0');
        my_putchar('0');
        nb = str[i];
        base_n(nb, 8, 1);
    } else if (str[i] > 8 && str[i] < 32) {
        my_putchar('0');
        nb = str[i];
        base_n(nb, 8, 1);
    }
    if (str[i] >= 127)
        base_n(str[i], 8, 1);
}

void flag_upper_s(va_list list)
{
    int cond;
    int i = 0;
    char *str = va_arg(list, char*);

    while (str[i]) {
        if (not_print(str[i]) == 1) {
            my_putchar(92);
            put_zero(str, i);
        } else if (not_print(str[i]) == 0)
            my_putchar(str[i]);
        i++;
    }
}
