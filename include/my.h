/*
** Include C, 2017
** File description:
** prototype include
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <time.h>
#include <signal.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pwd.h>
#include <sys/sysmacros.h>
#include <grp.h>

typedef struct element element_t;
typedef struct list_d list_dt;
typedef struct list list_t;
typedef enum state state_t;

struct element
{
    char *data;
    struct element *next;
    struct element *prev;
};

struct list_d
{
    int lenght;
    element_t *tail;
    element_t *head;
};

struct list
{
    char *data;
    struct list *next;
};

enum state
{
    STATE_KO = 0,
    STATE_OK,
    STATE_QUIT
};

extern const int ERROR;
extern const int SUCCESS;
extern const char DELIM[];

/* function_str_arr */
// bubble_sort
void cond_swap(char **str_2d_arr, int i, int j);
char **sort_param(int ac, char **av);
char **swap_str_arr(char **str_2d_arr, int i, int j);
// str_array_utils
char **init_2d_arr_arg(char **av, int ac);
int get_str_array_len(char **array);
void my_show_word_tab(char **str);
// str_word_tab
int put_str_to_delim_array(char *str, char **str_2d, int nb);
char **my_str_to_delim_array(char *str);

/* function_char */
// checking_char
int is_delim(char c, const char delim[]);
int is_number(char c);
int is_lowcase(char c);
int is_upcase(char c);
int is_sep(char c);
int is_alpha(char c);
// putchar
void my_putchar(char c);

/* function_env */
char *my_get_var_from_env(char **env, char *key);
/* copy_str */
char *my_strcat(char *dest, char *src);
char *my_strcpy(char *dest, char *src);
void my_strset(char *str, char c, int nb);
char *my_substr(char *str, int start, int nb_char);

/* function_string */
// count
int count_letters_delim(char *str);
int count_words_delim(char *str);
// str_utils
int my_strlen(char *c);
void my_putstr(char *c);
// checking_string
int my_str_is_number(char *str);
int my_str_is_alpha_num(char *str);
int my_str_is_alpha(char *str);
int my_str_is_lowcase(char *str);
int my_str_is_upcase(char *str);
// finding
int my_find_char(char *str, char c);
int my_strncmp(char *s1, char *s2, int n);
int my_strcmp(char *s1, char *s2);
int my_str_is_in_format(char *str, char *format);
// modifiy
char *delete_space_str(char *str);
char *my_revstr(char *str);
char *put_str_in_lowcase(char *str);
char *put_str_in_upcase(char *str);

/* function_error */
void my_print_err(char *c);
int my_put_err(char *c);

/* function_get_line */
char *my_get_line(int fd);
char read_next_char(int fd);

/* function_int */
int my_get_nbr(char *str);
void my_swap(int *a, int *b);
int my_unsign_put_nbr(unsigned int nb);
int my_put_nbr(int nb);

/* function_mem */
// memory
int my_free(void *ptr);
void *my_malloc(int size);
char *my_realloc(char *str, int size);
char *my_strdup(char *str);
// compare
int my_memcmp(void *s1, void *s2, unsigned int n);

/* function_printf */
int new_sign(int n);
char *malloc_base(int n, int base);
void base_n(int n, int base, int size);
void base_hexa_long(long n, long base);
char *malloc_base_long(long n, long base);
void flag_d(va_list list);
void flag_i(va_list list);
void flag_u(va_list list);
void flag_c(va_list list);
void flag_s(va_list list);
void flag_x(va_list list);
void flag_upper_x(va_list list);
void flag_o(va_list list);
void flag_b(va_list list);
void flag_p(va_list list);
void flag_perc(va_list list);
int not_print(char c);
void put_zero(char *str, int i);
void flag_upper_s(va_list list);
int my_printf(char *s, ...);
int looping_flag(char *s, char *flag, int i, int j);
int check_flag(char *s, int i);

/* function_rand */
int random_between_number(int a, int b);

/* function_list */
// simple_list
int append_begin_list(list_t **list, char *data);
int append_end_list(list_t **list, char *data);
int free_list(list_t **list);
int pop_begin_list(list_t **list);
int pop_end_list(list_t **list);
int pop_middle_list(list_t **list, list_t **current, char *del);
int pop_list(list_t **list, char *del);
int push_list(list_t **list, int ac, char **av);
int rev_list(list_t **list);
int show_list(list_t *list);
// double_list
int append_tail_list(list_dt **list, char *data);
int append_head_list(list_dt **list, char *data);
int show_list_head_d(list_dt *list);
int show_list_tail_d(list_dt *list);
list_dt *init_list_d(void);
void insert_list_anywhere(list_dt **list, element_t *element, element_t *tmp,
                          char *data);
int insert_list(list_dt **list, int pos, char *data);
void split_pop_list_d(element_t **tmp, element_t **tmp_two, list_dt **list);
void pop_list_d(list_dt **list, char *data);
void free_list_d(list_dt **list);
int push_list_d(list_dt **list, int ac, char **av);
#endif /* MY_H_ */
