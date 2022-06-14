/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** put a string src at the end of string dest
*/

#include "../../../include/my.h"

char *my_strcat(char *dest, char *src)
{
    char *new_mem;
    int len_dest = 0;
    int i;
    int j = 0;

    if (dest == NULL || src == NULL)
        my_put_err("my_strcat: dest has a NULL value");
    len_dest = my_strlen(dest) + my_strlen(src);
    new_mem = malloc(sizeof(char) * (len_dest + 1));
    for (i = 0; dest[i]; i++, j++) {
        new_mem[j] = dest[i];
    }
    for (i = 0; src[i]; i++, j++) {
        new_mem[j] = src[i];
    }
    new_mem[len_dest] = '\0';
    return (new_mem);
}
