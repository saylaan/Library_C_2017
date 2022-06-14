/*
** EPITECH PROJECT, 2018
** pop_list_d.c
** File description:
** function for pop list d
*/

#include "../../../../include/my.h"

void split_pop_list_d(element_t **tmp, element_t **tmp_two, list_dt **list)
{
    if ((*tmp)->next == NULL) {
        (*list)->tail = (*tmp)->prev;
        (*list)->tail->next = NULL;
    } else if ((*tmp)->prev == NULL) {
        (*list)->head = (*tmp)->next;
        (*list)->head->prev = NULL;
    } else {
        (*tmp_two) = (*tmp)->prev;
        (*tmp_two)->next = (*tmp)->next;
        (*tmp)->next->prev = (*tmp_two);
    }
}

void pop_list_d(list_dt **list, char *data)
{
    element_t *tmp = (*list)->head;
    element_t *tmp_two;

    while (tmp != NULL) {
        if (!my_strcmp(tmp->data, data)) {
            split_pop_list_d(&tmp, &tmp_two, list);
            free (tmp);
            (*list)->lenght--;
            break;
        }
        tmp = tmp->next;
    }
}
