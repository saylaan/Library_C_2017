/*
** EPITECH PROJECT, 2017
** new_base.c
** File description:
** turn a number into a other base
*/

#include "../../../include/my.h"

char *malloc_base(int n, int base)
{
    char *str;
    int count = 0;

    while (n > 0) {
        n = n / base;
        count++;
    }
    str = my_malloc(count);
    str[count] = '\0';
    return (str);
}

char *malloc_base_long(long n, long base)
{
    char *str;
    long count = 0;

    while (n > 0) {
        n = n / base;
        count++;
    }
    str = my_malloc(count);
    str[count] = '\0';
    return (str);
}

void base_hexa_long(long n, long base)
{
    int i = 0;
    int tmp = 0;
    char *str = malloc_base_long(n, base);
    char alpha_min[36] = "0123456789abcdefghijklmnopqrstuvwxyz";

    while (n > 0) {
        tmp = n % base ;
        n = n / base;
        str[i] = alpha_min[tmp];
        i++;
    }
    my_putstr(my_revstr(str));
    my_free(str);
}

void base_n(int n, int base, int size)
{
    int i = 0;
    int tmp = 0;
    char *str = malloc_base(n, base);
    char alpha_min[36] = "0123456789abcdefghijklmnopqrstuvwxyz";
    char alpha_maj[36] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    n = new_sign(n);
    while (n > 0) {
        tmp = n % base ;
        n = n / base;
        if (size == 1)
            str[i] = alpha_maj[tmp];
        else if (size == 0)
            str[i] = alpha_min[tmp];
        i++;
    }
    my_putstr(my_revstr(str));
    my_free(str);
}

int new_sign(int n)
{
    if (n < 0) {
        n = -n;
        my_putchar('-');
    }
    return (n);
}
