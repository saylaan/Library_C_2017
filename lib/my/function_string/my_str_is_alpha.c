/*
** EPITECH PROJECT, 2018
** my_str_is__alpha.c
** File description:
** string is in alpha
*/

#include "../../../include/my.h"

int my_str_is_alpha(char *str)
{
    if (str == NULL)
        my_put_err("my_strlowcase : String pointer is NULL");
    for (int i = 0; str[i]; i++) {
        if (is_alpha(str[i]) == 0)
            return (0);
    }
    return (1);
}
