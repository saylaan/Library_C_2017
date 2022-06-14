/*
** EPITECH PROJECT, 2018
** my_string_to_int.c
** File description:
** put a string into a integer
*/

#include "../../../include/my.h"

int my_get_nbr(char *str)
{
    int count_neg = 0;
    int neg = 1;
    int nb = 0;

    if (str == NULL)
        my_put_err("my_string_to_int : String pointer is NULL\n");
    for (int i = 0; str[i]; i++) {
        if (str[i] == '-')
            count_neg++;
    }
    if (count_neg % 2 == 1)
        neg = -1 * neg;
    for (int j = 0; str[j]; j++) {
        if (is_number(str[j]) == 1)
            nb = nb * 10 + (str[j] - '0');
    }
    nb = neg *nb;
    return (nb);
}
