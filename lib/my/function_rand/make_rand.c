/*
** EPITECH PROJECT, 2018
** random.c
** File description:
** function random
*/

#include "../../../include/my.h"

int random_between_number(int a, int b)
{
    return (random() % (b - a) + a);
}
