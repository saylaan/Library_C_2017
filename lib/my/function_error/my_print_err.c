/*
** EPITECH PROJECT, 2018
** my_print_err.c
** File description:
** print output error
*/

#include "../../../include/my.h"

void my_print_err(char *c)
{
    write (2, c, my_strlen(c));
}
