/*
** EPITECH PROJECT, 2018
** my_str_is_number.c
** File description:
** string is in number
*/

#include "../../../include/my.h"

int my_str_is_number(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (is_number(str[i]) == 0)
            return (0);
    }
    return (1);
}
