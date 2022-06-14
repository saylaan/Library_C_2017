/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** behavior of strncmp
*/

#include "../../../include/my.h"

int my_strncmp(char *s1, char *s2, int n)
{
    int i;

    if (s1 == NULL || s2 == NULL)
        my_put_err("my_strcmp : String pointer is NULL");
    for (i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return (0);
}
