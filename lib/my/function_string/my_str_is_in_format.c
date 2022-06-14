/*
** EPITECH PROJECT, 2018
** my_isintformat.c
** File description:
** check if format is int str
*/

#include "../../../include/my.h"

int my_str_is_in_format(char *str, char *format)
{
    int i;
    int j;
    int count = 0;

    if (str == NULL || format == NULL)
        my_put_err("my_strisintformat : String pointer is NULL");
    for (i = 0; str[i]; i++) {
        for (j = 0; format[j]; j++) {
            if (str[i] == format[j]) {
                count++;
                break;
            }
        }
    }
    if (count == my_strlen(str))
        return (1);
    return (0);
}
