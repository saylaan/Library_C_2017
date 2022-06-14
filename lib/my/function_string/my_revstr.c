/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** reverse a string
*/

#include "../../../include/my.h"

char *my_revstr(char *str)
{
    char tmp;
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}
