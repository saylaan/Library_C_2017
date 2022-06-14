/*
** EPITECH PROJECT, 2018
** show_list.c
** File description:
** function for show list
*/

#include "../../../../include/my.h"

int show_list(list_t *list)
{
    list_t *tmp = list;

    if (!list)
        return (0);
    while (tmp) {
        my_printf("%s\n", tmp->data);
        tmp = tmp->next;
    }
    return (0);
}
