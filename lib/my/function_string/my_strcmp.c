/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** behavior of strcmp(3)
*/

#include "../../../include/my.h"

int my_strcmp(char *s1, char *s2)
{
    int i;

    if (s1 == NULL || s2 == NULL)
        my_put_err("my_strcmp : String pointer is NULL");
    for (i = 0; s1[i] || s2[i]; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
