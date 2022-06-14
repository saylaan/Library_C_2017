/*
** EPITECH PROJECT, 2018
** my_str_to_delim_array.c
** File description:
** functions for str to delim array
*/

#include "../../../include/my.h"

int put_str_to_delim_array(char *str, char **str_2d, int nb)
{
    int i = 0;
    int n = 0;
    int j = 0;
    int nb_lt = 0;

    for (n = 0; n < nb; n++) {
        nb_lt = 0;
        for (; !is_delim(str[i], DELIM) && str[i]; i++);
        for (j = i; is_delim(str[j], DELIM) && str[j]; j++, nb_lt++);
        if ((str_2d[n] = malloc(sizeof(char) * (nb_lt + 1))) == NULL)
            return (0);
        str_2d[n][nb_lt] = '\0';
        for (j = 0; is_delim(str[i], DELIM) && str[i]; j++, i++) {
            str_2d[n][j] = str[i];
        }
    }
    str_2d[n] = NULL;
    return (1);
}

char **my_str_to_delim_array(char *str)
{
    char **str_2d_ar = NULL;
    int nb_wd = 0;

    nb_wd = count_words_delim(str);
    if ((str_2d_ar = malloc(sizeof(char *) * (nb_wd + 1))) == NULL)
        return (NULL);
    if (!put_str_to_delim_array(str, str_2d_ar, nb_wd))
        return (NULL);
    return (str_2d_ar);
}
