/*
** EPITECH PROJECT, 2018
** my_substr.c
** File description:
** copy a string from a offset to a new string
*/

#include "../../../include/my.h"

char *my_substr(char *str, int start, int nb_char)
{
    int str_len;
    char *new_mem;
    int j = 0;
    int i;

    if (str == NULL)
        my_put_err("my_substr: str has a NULL value");
    str_len = my_strlen(str);
    if (str_len < start)
        my_put_err("my_substr: start is longer than str lenght");
    else if (str_len < (start + nb_char))
        my_put_err("start + nb_char is longer than str lenght");
    new_mem = my_malloc(nb_char + 1);
    new_mem[nb_char] = '\0';
    for (i = start; i <= nb_char; new_mem[j++] = str[i++]);
    return (new_mem);
}
