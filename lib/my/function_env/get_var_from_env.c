/*
** EPITECH PROJECT, 2018
** my_get_var_from_env.c
** File description:
** my_get_var_from_env.c
*/

#include "../../../include/my.h"

char *my_get_var_from_env(char **env, char *key)
{
    char *new_mem;
    char *final;
    int size = 0;
    int len = 0;

    for (int i = 0; env[i]; i++) {
        if (my_strncmp(env[i], key, my_strlen(key)) == 0) {
            new_mem = env[i];
        }
    }
    for (len = 0; new_mem[len] != '='; len++);
    for (len += 1; new_mem[len]; len++, size++);
    final = my_malloc(size);
    len = len - size;
    for (int i = 0; new_mem[len]; final[i++], new_mem[len++]);
    my_free(new_mem);
    return (final);
}
