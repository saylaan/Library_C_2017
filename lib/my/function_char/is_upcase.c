/*
** EPITECH PROJECT, 2018
** is_upcase.c
** File description:
** char in up case
*/

#include "../../../include/my.h"

int is_upcase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}
