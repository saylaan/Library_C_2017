/*
** EPITECH PROJECT, 2018
** free_list_d.c
** File description:
** function for free list d
*/

#include "../../../../include/my.h"

void free_list_d(list_dt **list)
{
    element_t *tmp = (*list)->head;
    element_t *tmp_two = NULL;

    while (tmp) {
        tmp_two = tmp;
        tmp = tmp->next;
        free (tmp_two);
    }
    free (*list);
    *list = NULL;
}
