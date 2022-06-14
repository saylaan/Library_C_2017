/*
** EPITECH PROJECT, 2018
** my_str_is_lowcase.c
** File description:
** string is in lowcase
*/

#include "../../../include/my.h"

int my_str_is_lowcase(char *str)
{
    int i;

    if (str == NULL)
        my_put_err("my_strlowcase : String pointer is NULL");
    for (i = 0; str[i]; i++) {
        if (is_lowcase(str[i]) == 0)
            return (0);
    }
    return (1);
}
