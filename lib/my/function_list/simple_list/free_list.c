/*
** EPITECH PROJECT, 2018
** free_list.c
** File description:
** function for free list
*/

#include "../../../../include/my.h"

int free_list(list_t **list)
{
    list_t *next = NULL;

    while (*list) {
        next = (*list)->next;
        free(*list);
        (*list) = next;
    }
}
