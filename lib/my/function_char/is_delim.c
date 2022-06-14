/*
** EPITECH PROJECT, 2018
** is_delim.c
** File description:
** function is_delim
*/

#include "../../../include/my.h"

int is_delim(char c, const char DELIM[])
{
    for (int i = 0; DELIM[i]; i++)
        if (c == DELIM[i])
            return (0);
    return (1);
}
