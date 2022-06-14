/*
** EPITECH PROJECT, 2018
** is_alpha_num.c
** File description:
** function alpha_num
*/

#include "../../../include/my.h"

int my_str_is_alpha_num(char *str)
{
    int i;

    for (i = 0; str[i]; i++) {
        if (!is_alpha(str[i]) && !is_number(str[i]) && str[i] != '_')
            return (0);
    }
    return (1);
}
