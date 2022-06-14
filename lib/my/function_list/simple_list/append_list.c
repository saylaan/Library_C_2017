/*
** EPITECH PROJECT, 2018
** append_list.c
** File description:
** functions for append in list
*/

#include "../../../../include/my.h"

int append_begin_list(list_t **list, char *data)
{
    list_t *element;

    if ((element = malloc(sizeof(list_t))) == NULL)
        return (84);
    element->data = data;
    if (!list)
        *list = element;
    element->next = *list;
    *list = element;
    return (0);
}

int append_end_list(list_t **list, char *data)
{
    list_t *element;
    list_t *tmp = *list;

    if ((element = malloc(sizeof(list_t))) == NULL)
        return (84);
    element->data = data;
    element->next = NULL;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = element;
    return (0);
}
