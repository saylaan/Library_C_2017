/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** len of a string
*/

#include "../../../include/my.h"

int my_strlen(char *c)
{
    int i;

    if (c == NULL)
        my_put_err("my_strlen: String pointer is NULL");
    for (i = 0; c[i]; i++);
    return (i);
}
