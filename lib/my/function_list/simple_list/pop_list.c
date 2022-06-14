/*
** EPITECH PROJECT, 2018
** pop_list.c
** File description:
** function for pop list
*/

#include "../../../../include/my.h"

int pop_begin_list(list_t **list)
{
    list_t *tmp = (*list)->next;

    if (!list) {
        *list = NULL;
        return (0);
    } else if ((*list)->next == NULL) {
        *list = NULL;
        return (0);
    }
    free(*list);
    *list = tmp;
    return (0);
}

int pop_end_list(list_t **list)
{
    list_t *tmp;
    list_t *tmp_two;

    tmp = *list;
    tmp_two = *list;
    while (tmp->next != NULL) {
        tmp_two = tmp;
        tmp = tmp->next;
    }
    tmp_two->next = NULL;
    free(tmp);
    return (0);
}

int pop_middle_list(list_t **list, list_t **current, char *del)
{
    list_t *prev = NULL;
    list_t *next = *list;

    next = (*current)->next;
    while (next != NULL) {
        prev = *current;
        (*current) = (*current)->next;
        if ((*current)->next == NULL)
            break;
        next = next->next;
        if (!my_strcmp((*current)->data, del)) {
            prev->next = next;
            free(*current);
            return (0);
        }
    }
    return (0);
}

int pop_list(list_t **list, char *del)
{
    list_t *current;

    current = *list;
    if (!my_strcmp(current->data, del)) {
        pop_begin_list(list);
        return (0);
    }
    pop_middle_list(list, &current, del);
    if (!my_strcmp(current->data, del)) {
        pop_end_list(list);
        return (0);
    }
}
