/*
** EPITECH PROJECT, 2018
** init_list_d.c
** File description:
** function for init a list
*/

#include "../../../../include/my.h"

list_dt *init_list_d(void)
{
    list_dt *list;

    if ((list = malloc(sizeof(list_dt))) == NULL)
        return (NULL);
    list->lenght = 0;
    list->tail = NULL;
    list->head = NULL;
    return (list);
}
