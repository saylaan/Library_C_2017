/*
** EPITECH PROJECT, 2018
** my_strlowcase.c
** File description:
** turn a string into low case
*/

#include "../../../include/my.h"

char *put_str_in_lowcase(char *str)
{
    int i;

    if (str == NULL)
        my_put_err("my_strlowcase : String pointer is NULL");
    for (i = 0; str[i]; i++) {
        if (is_upcase(str[i]) == 1) {
            str[i] = str[i] + 32;
        }
    }
    return (str);
}
