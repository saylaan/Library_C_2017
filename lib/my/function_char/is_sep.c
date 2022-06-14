/*
** EPITECH PROJECT, 2018
** is_sep.c
** File description:
** char is a sep
*/

#include "../../../include/my.h"

int is_sep(char c)
{
    if (c == '\n' || c == '\v' || c == '\t' || c == ' ')
        return (1);
    return (0);
}
