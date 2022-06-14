/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** behavior of strdup
*/

#include "../../../include/my.h"

char *my_strdup(char *str)
{
    char *new_mem;

    if (str == NULL)
        my_put_err("my_strdup: String pointer is NULL");
    new_mem = my_malloc(my_strlen(str) + 1);
    new_mem[my_strlen(str)] = '\0';
    new_mem = my_strcpy(new_mem, str);
    return (new_mem);
}
