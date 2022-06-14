/*
** EPITECH PROJECT, 2018
** is_lowcase.c
** File description:
** char is in low case
*/

#include "../../../include/my.h"

int is_lowcase(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}
