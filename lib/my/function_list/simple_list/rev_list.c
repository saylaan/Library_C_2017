/*
** EPITECH PROJECT, 2018
** rev_list.c
** File description:
** function for rev list
*/

#include "../../../../include/my.h"

int rev_list(list_t **list)
{
    list_t *next;
    list_t *prev = NULL;
    list_t *current;

    current = *list;
    while (current) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *list = prev;
    return (0);
}
