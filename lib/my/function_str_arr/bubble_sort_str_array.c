/*
** EPITECH PROJECT, 2018
** bubble_sort_2d_arr.c
** File description:
** sort a 2d array
*/

#include "../../../include/my.h"

void cond_swap(char **str_2d_arr, int i, int j)
{
    if (my_strcmp(str_2d_arr[i], str_2d_arr[j]) > 0)
        swap_str_arr(str_2d_arr, i , j);
}

char **sort_param(int ac, char **av)
{
    int i;
    int j;
    char **str_2d_arr = init_2d_arr_arg(av, ac);
    int size = get_str_array_len(str_2d_arr);

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1; j++) {
            cond_swap(str_2d_arr, j, j + 1);
        }
    }
    return (str_2d_arr);
}
