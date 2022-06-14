/*
** EPITECH PROJECT, 2018
** is_number.c
** File description:
**     char is a number
*/

#include "../../../include/my.h"

int is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
