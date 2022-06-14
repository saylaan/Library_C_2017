/*
** EPITECH PROJECT, 2018
** my_realloc_str.c
** File description:
** behavior of realloc
*/

#include "../../../include/my.h"

char *my_realloc(char *str, int size)
{
    int len_str = 0;
    char *new_mem;

    if (str == NULL) {
        new_mem = my_malloc(size);
        new_mem[size] = '\0';
        return (new_mem);
    }
    len_str = my_strlen(str);
    if (size <= len_str)
        my_put_err("my_realloc_str: s value is too short");
    else {
        new_mem = my_malloc(size);
        new_mem[size] = '\0';
        new_mem = my_strcpy(new_mem, str);
    }
    my_free(str);
    return (new_mem);
}
