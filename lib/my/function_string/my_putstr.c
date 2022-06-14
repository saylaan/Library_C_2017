/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** print some char
*/

#include "../../../include/my.h"

void my_putstr(char *c)
{
    if (c == NULL)
        my_put_err("my_putstr: String pointer is NULL");
    for (int i = -1; c[++i]; my_putchar(c[i]));
}
