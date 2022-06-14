##
## Library C, 2017
## Makefile
## File description:
## Makefile My_exec
##

SRC_UT  =       $(realpath ./lib/my)

FILE    =    core.c                        \

NAME    =       program

$(MAKE) =       Makefile

OBJ     =       $(FILE:.c=.o)

INCLUDE =       -I./include

CFLAGS  =       -std=gnull -Wall -Wextra $(INCLUDE) -g

LDFLAGS =       -L./lib/my -lrb

all    :      $(NAME)

$(NAME)    :    $(OBJ)
        make -C ./lib/my
        cc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean    :
        rm -f $(OBJ)

fclean    :     clean
        rm -f $(NAME)
        make -C ./lib/my fclean

re    :        fclean  all

.PHONY    :     clean fclean re
