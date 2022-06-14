/*
** EPITECH PROJECT, 2018
** my_memcmp.c
** File description:
** behavior of memcmp
*/

#include "../../../include/my.h"

int my_memcmp(void *s1, void *s2, unsigned int n)
{
    unsigned char *a;
    unsigned char *b;
    int i;

    if (!s1 || !s2)
        my_put_err("my_memcmp : String pointer is NULL");
    a = (unsigned char*) s1;
    b = (unsigned char*) s2;
    for (i = 0; i < n; a[i], b[i], i++) {
        if (a[i] != b[i]) {
            return (a[i] - b[i]);
        }
    }
    return (0);
}
