/*
** EPITECH PROJECT, 2018
** get_line.c
** File description:
** return a string from a file descriptor
*/

#include "../../../include/my.h"

char *my_get_line(int fd)
{
    char *buffer = my_malloc(1);
    int i = 1;
    char c = read_next_char(fd);

    buffer[0] = c;
    buffer[1] = '\0';
    while (c != '\n' && c != '\0') {
        buffer = my_realloc(buffer, i + 1);
        c = read_next_char(fd);
        buffer[i++] = c;
    }
    buffer[i - 1] = '\0';
    if (c == '\0') {
        my_free(buffer);
        return (0);
    }
    return (buffer);
}
