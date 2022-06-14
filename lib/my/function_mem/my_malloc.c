/*
** EPITECH PROJECT, 2018
** my_malloc.c
** File description:
** malloc in memory
*/

#include "../../../include/my.h"

void *my_malloc(int size)
{
    void *value;

    if (size == 0)
        my_put_err("my_malloc: Cannot allocate 0 byte");
    value = malloc(sizeof(void) * (size + 1));
    if (!value)
        my_put_err("my_malloc: Pointer is NULL");
    return (value);
}
