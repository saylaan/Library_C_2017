/*
** EPITECH PROJECT, 2018
** swap_2d_arr.c
** File description:
** swap two string of a 2d array
*/

#include "../../../include/my.h"

char **swap_str_arr(char **str_2d_arr, int i, int j)
{
    char *new_mem = str_2d_arr[i];

    str_2d_arr[i] = str_2d_arr[j];
    str_2d_arr[j] = new_mem;
    return (str_2d_arr);
}
