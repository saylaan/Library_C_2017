/*
** EPITECH PROJECT, 2018
** append_list_d.c
** File description:
** function for append list d
*/

#include "../../../../include/my.h"

int append_tail_list(list_dt **list, char *data)
{
    element_t *element;

    if ((element = malloc(sizeof(element_t))) == NULL)
        return (84);
    element->data = data;
    element->next = NULL;
    if (!((*list)->tail)) {
        element->prev = NULL;
        (*list)->tail = element;
        (*list)->head = element;
    } else {
        (*list)->tail->next = element;
        element->prev = (*list)->tail;
        (*list)->tail = element;
    }
    (*list)->lenght++;
    return (0);
}

int append_head_list(list_dt **list, char *data)
{
    element_t *element;

    if ((element = malloc(sizeof(element_t))) == NULL)
        return (84);
    element->data = data;
    element->prev = NULL;
    if (((*list)->head) == NULL) {
        element->next = NULL;
        (*list)->head = element;
        (*list)->tail = element;
    } else {
        (*list)->head->prev = element;
        element->next = (*list)->head;
        (*list)->head = element;
    }
    (*list)->lenght++;
    return (0);
}
