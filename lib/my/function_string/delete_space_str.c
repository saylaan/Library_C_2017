/*
** EPITECH PROJECT, 2018
** my_epurstr.c
** File description:
** delete all space or backslash superflu
*/

#include "../../../include/my.h"

char *delete_space_str(char *str)
{
    int i = 0;

    if (str == NULL)
        my_put_err("my_epurstr : String pointer is NULL");
    for (int j = 0; str[j]; j++) {
        if (is_sep(str[j]) == 1 && is_sep(str[j - 1]) == 0 && j != 0) {
            str[i] = ' ';
            i++;
        } else if (is_sep(str[j]) == 0) {
            str[i] = str[j];
            i++;
        }
    }
    if (str[i - 1] == ' ')
        str[i - 1] = '\0';
    str[i] = '\0';
    return (str);
}
