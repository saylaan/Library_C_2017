/*
** EPITECH PROJECT, 2018
** my_strarraylen.c
** File description:
** return size of a 2d_array
*/

#include "../../../include/my.h"

int get_str_array_len(char **array)
{
    int i;

    if (!array)
        my_put_err("my_strarraylen : String pointer is NULL");
    for (i = -1; array[++i];);
    return (i);
}
