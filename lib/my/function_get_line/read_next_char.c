/*
** EPITECH PROJECT, 2018
** read_next_char.c
** File description:
** function for read next char
*/

#include "../../../include/my.h"

char read_next_char(int fd)
{
    char c;
    int len;

    len = read(fd, &c, 1);
    if (len == 0)
        return (0);
    return (c);
}
