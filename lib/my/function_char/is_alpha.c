/*
** EPITECH PROJECT, 2018
** is_alpha.c
** File description:
** char is in alpha
*/

#include "../../../include/my.h"

int is_alpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
    || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}
