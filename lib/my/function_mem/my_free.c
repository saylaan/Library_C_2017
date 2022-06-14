/*
** EPITECH PROJECT, 2018
** my_free.c
** File description:
** function free
*/

#include "../../../include/my.h"

int my_free(void *ptr)
{
    if (!ptr) {
        my_put_err("my_free: Cannot free NULL pointer");
        return (ERROR);
    }
    free(ptr);
    return (0);
}
