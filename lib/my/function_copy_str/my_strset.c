/*
** EPITECH PROJECT, 2018
** my_strset.c
** File description:
** fill in the string n first octets with a char
*/

#include "../../../include/my.h"

void my_strset(char *str, char c, int nb)
{
    int i;

    if (str == NULL)
        my_put_err("my_strset: str has a NULL value");
    for (i = 0; i < nb; str[i++] = c);
}
