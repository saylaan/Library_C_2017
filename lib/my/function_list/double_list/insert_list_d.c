/*
** EPITECH PROJECT, 2018
** insert_list_d.c
** File description:
** function for insert list d
*/

#include "../../../../include/my.h"

void insert_list_anywhere(list_dt **list, element_t *element, element_t *tmp,
char *data)
{
    element_t *tmp_two;

    if (tmp->prev == NULL) {
        append_head_list(list, data);
    } else if (tmp->next == NULL) {
        tmp_two = tmp->prev;
        tmp_two->next = element;
        tmp->prev = element;
        element->prev = tmp_two;
        element->next = tmp;
    } else {
        tmp_two = tmp->prev;
        tmp_two->next = element;
        tmp->prev = element;
        element->prev = tmp_two;
        element->next = tmp;
    }
    (*list)->lenght++;
}

int insert_list(list_dt **list, int pos, char *data)
{
    element_t *element = malloc(sizeof(element_t));
    element_t *tmp = (*list)->head;
    int i = 0;
    int state = 0;

    if ((element = malloc(sizeof(element_t))) == NULL)
        return (84);
    element->data = data;
    while (tmp != NULL && i <= pos) {
        if (i == pos) {
            state++;
            insert_list_anywhere(list, element, tmp, data);
        }
        tmp = tmp->next;
        i++;
    }
    if (i == pos && state == 0) {
        append_tail_list(list, data);
    }
    return (0);
}
