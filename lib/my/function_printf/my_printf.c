/*
** EPITECH PROJECT, 2017
** print.c
** File description:
** behavior of printf
*/

#include "../../../include/my.h"

static void (*tab_flag[13])(va_list) = {&flag_d, &flag_upper_s, &flag_i,
    &flag_u, &flag_c, &flag_s, &flag_upper_x, &flag_x,
    &flag_b, &flag_o, &flag_p, &flag_perc, '\0'};

static char flag[13] ={'d', 'S', 'i', 'u', 'c', 's',
            'X', 'x', 'b', 'o', 'p', '%', '\0'};

int looping_flag(char *s, char *flag, int i, int j)
{
    while (s[i] != flag[j]) {
        j++;
    }
    return (j);
}

int check_flag(char *s, int i)
{
    for (i = i + 1; s[i]; i++)
        if (s[i] == 'd' || s[i] == 'S'|| s[i] == 'i' || s[i] == 'u'
        || s[i] == 'c' || s[i] == 's' || s[i] == 'X' || s[i] == 'x'
        || s[i] == 'b' || s[i] == 'o' || s[i] == 'p' || s[i] == '%')
            return (i);
}

int my_printf(char *s, ...)
{
    int j = 0;
    va_list list;

    va_start(list, s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == '%') {
            i = check_flag(s, i);
            j = 0;
            j = looping_flag(s, flag, i, j);
            tab_flag[j](list);
        } else
            my_putchar(s[i]);
    }
    va_end(list);
    return (0);
}
