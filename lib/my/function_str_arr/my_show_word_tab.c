/*
** EPITECH PROJECT, 2018
** show_word_tab.c
** File description:
** show word of a tab
*/

#include "../../../include/my.h"

void my_show_word_tab(char **str)
{
    int i;

    if (!str)
        my_put_err("my_show_word_tab : String pointer is NULL");
    for (i = 0; str[i]; my_putstr(str[i++]), my_putchar('\n'));
}
