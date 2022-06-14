/*
** EPITECH PROJECT, 2018
** count_words_delim.c
** File description:
** functions for count words delim
*/

#include "../../../include/my.h"

int count_words_delim(char *str)
{
    int i = 0;
    int nb_wd = 0;

    if (!str)
        return (0);
    while (str[i]) {
        for (; !is_delim(str[i], DELIM) && str[i]; i++);
        if (str[i] == '\0')
            return (nb_wd);
        if (is_delim(str[i], DELIM))
            nb_wd++;
        for (; is_delim(str[i], DELIM) && str[i]; i++);
        if (str[i] == '\0')
            return (nb_wd);
    }
    return (nb_wd);
}
