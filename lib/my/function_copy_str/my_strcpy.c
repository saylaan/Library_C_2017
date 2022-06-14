/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** function that copy a src into a dest
*/

#include "../../../include/my.h"

char *my_strcpy(char *dest, char *src)
{
    int len_src = 0;
    int i;

    if (dest == NULL)
        my_put_err("my_strcpy: dest is a NULL pointer");
    else if (src == NULL)
        my_put_err("my_strcpy: src is a NULL pointer");
    len_src = my_strlen(src);
    for (i = -1; src[++i]; dest[i] = src[i]);
    return (dest);
}
