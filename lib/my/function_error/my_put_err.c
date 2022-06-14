/*
** EPITECH PROJECT, 2018
** my_put_err.c
** File description:
** my_put_err.c
*/

#include "../../../include/my.h"

int my_put_err(char *c)
{
    write(2, "Error: ", 7);
    my_print_err(c);
    my_putchar('\n');
    return (84);
}
