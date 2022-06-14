/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Display a int place as a parameter
*/

#include "../../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        if (nb == INT_MIN) {
            nb = nb + 2000000000;
            my_putchar('2');
        }
        my_put_nbr(-nb);
    } else if (nb < 10)
        my_putchar(nb + 48);
    else {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    return (0);
}
