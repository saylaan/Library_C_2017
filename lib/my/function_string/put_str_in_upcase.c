/*
** EPITECH PROJECT, 2018
** put_str_upcase.c
** File description:
** turn a string into up case
*/

#include "../../../include/my.h"

char *put_str_in_upcase(char *str)
{
    int i = 0;

    if (str == NULL)
        my_put_err("my_strupcase : String pointer is NULL");
    for (i = 0; str[i]; i++) {
        if (is_lowcase(str[i]) == 1) {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
