/*
** EPITECH PROJECT, 2018
** my_find_char.c
** File description:
** return the iteration of the char found
*/

#include "../../../include/my.h"

int my_find_char(char *str, char c)
{
    int i;

    if (str == NULL)
        my_put_err("my_find_char: str has a NULL value");
    for (i = 0; str[i]; i++) {
        if (str[i] == c)
            return (i);
    }
    return (-1);
}
