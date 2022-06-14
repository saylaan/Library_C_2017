/*
** EPITECH PROJECT, 2018
** push_list_d.c
** File description:
** function for push list d
*/

#include "../../../../include/my.h"

int push_list_d(list_dt **list, int ac, char **av)
{
    int i;

    for (i = 0; i < ac; i++) {
        if (append_tail_list(list, av[i]))
            return (84);
    }
    return (0);
}
