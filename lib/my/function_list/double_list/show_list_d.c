/*
** EPITECH PROJECT, 2018
** show_list_d.c
** File description:
** function for show list
*/

#include "../../../../include/my.h"

int show_list_head_d(list_dt *list)
{
    element_t *tmp = list->head;

    while (tmp) {
        my_printf("%s\n", tmp->data);
        tmp = tmp->next;
    }
    return (0);
}

int show_list_tail_d(list_dt *list)
{
    element_t *tmp = list->tail;

    while (tmp) {
        my_printf("%s\n", tmp->data);
        tmp = tmp->prev;
    }
    return (0);
}
