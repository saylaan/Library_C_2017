/*
** EPITECH PROJECT, 2018
** init_2d_arr_arg.c
** File description:
** init a 2d array
*/

#include "../../../include/my.h"

char **init_2d_arr_arg(char **av, int ac)
{
    int j = 0;
    char **str_2d_arr = malloc(sizeof(char*) * (ac));

    for (int i = 1; i < ac; i++, j++) {
        str_2d_arr[j] = av[i];
    }
    str_2d_arr[j] = NULL;
    return (str_2d_arr);
}
