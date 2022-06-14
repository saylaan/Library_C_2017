SRC    =    function_char/is_lowcase.c            \
        function_char/is_upcase.c            \
        function_char/is_number.c            \
        function_char/is_alpha.c            \
        function_char/is_sep.c                \
        function_char/is_delim.c            \
        function_char/my_putchar.c            \
        function_copy_str/my_strcat.c            \
        function_copy_str/my_strcpy.c            \
        function_copy_str/my_strset.c            \
        function_copy_str/my_substr.c            \
        function_env/get_var_from_env.c            \
        function_string/count_words_delim.c        \
        function_string/count_letters_delim.c        \
        function_string/my_strlen.c            \
        function_string/my_putstr.c            \
        function_string/my_find_char.c            \
        function_string/my_revstr.c            \
        function_string/my_str_is_alpha.c        \
        function_string/my_str_is_alpha_num.c        \
        function_string/my_str_is_number.c        \
        function_string/my_str_is_lowcase.c        \
        function_string/my_str_is_upcase.c        \
        function_string/my_str_is_in_format.c        \
        function_string/my_strncmp.c            \
        function_string/my_strcmp.c            \
        function_string/delete_space_str.c        \
        function_string/put_str_in_upcase.c        \
        function_string/put_str_in_lowcase.c        \
        function_str_arr/get_str_array_len.c        \
        function_str_arr/bubble_sort_str_array.c    \
        function_str_arr/init_str_arr_arg.c        \
        function_str_arr/swap_str_arr.c            \
        function_str_arr/my_show_word_tab.c        \
        function_str_arr/my_str_to_delim_array.c    \
        function_int/my_get_nbr.c            \
        function_int/my_put_nbr.c            \
        function_int/my_unsign_put_nbr.c        \
        function_int/swap_int.c                \
        function_error/my_print_err.c            \
        function_error/my_put_err.c            \
        function_get_line/my_get_line.c            \
        function_get_line/read_next_char.c        \
        function_rand/make_rand.c            \
        function_mem/my_free.c                \
        function_mem/my_malloc.c            \
        function_mem/my_memcmp.c            \
        function_mem/my_realloc_str.c            \
        function_mem/my_strdup.c            \
        function_printf/change_base.c            \
        function_printf/function_flag_one.c        \
        function_printf/function_flag_two.c        \
        function_printf/function_flag_three.c        \
        function_printf/my_printf.c            \
        function_list/double_list/append_list_d.c    \
        function_list/double_list/free_list_d.c        \
        function_list/double_list/insert_list_d.c    \
        function_list/double_list/pop_list_d.c        \
        function_list/double_list/push_list_d.c        \
        function_list/double_list/show_list_d.c        \
        function_list/double_list/init_list_d.c        \
        function_list/simple_list/append_list.c        \
        function_list/simple_list/pop_list.c        \
        function_list/simple_list/free_list.c        \
        function_list/simple_list/rev_list.c        \
        function_list/simple_list/show_list.c        \
        use_const.c                    \

SRC2    =    my.h

OBJ    =    $(SRC:.c=.o)

NAME    =    librb.a

all    :    $(NAME)

$(NAME) :    $(OBJ)
        ar rc $(NAME) $(OBJ)

clean   :
        rm -f $(OBJ)

fclean  :    clean
        rm -f $(NAME)

re    :    fclean all

.PHONY     :    clean fclean
