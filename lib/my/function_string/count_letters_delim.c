/*
** EPITECH PROJECT, 2018
** count_letters_delim.c
** File description:
** function for count letters delim
*/

#include "../../../include/my.h"

int count_letters_delim(char *str)
{
    int i = 0;
    int nb_lt = 0;

    while (str[i]) {
        for (; is_delim(str[i], DELIM) && str[i]; i++, nb_lt++);
        for (; !is_delim(str[i], DELIM) && str[i]; i++);
    }
    return (nb_lt);
}
