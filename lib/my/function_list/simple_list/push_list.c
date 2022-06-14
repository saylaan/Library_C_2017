/*
** EPITECH PROJECT, 2018
** push_list.c
** File description:
** function for push list
*/

#include "../../../../include/my.h"

int push_list(list_t **list, int ac, char **av)
{
    for (int i = 0; i < ac; i++) {
        if (append_begin_list(list, av[i]))
            return (84);
    }
    return (0);
}
