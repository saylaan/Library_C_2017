##
## Test C, 2017
## makefile unittest
## File description:
## unit test
##

SRC_DIR 	=	$(realpath ../infin_op)

# Must lisyt all project files without the main() function
# Criterion uses its own main() ;
# having a main() in any .c file will have the build fail

SRC		=	$(SRC_DIR)/annex_div_two.c		\
			$(SRC_DIR)/annex_div_three.c		\
			$(SRC_DIR)/annex_div.c			\
			$(SRC_DIR)/infindiv.c			\
			$(SRC_DIR)/annex_add_sub.c		\
			$(SRC_DIR)/infinadd.c			\
			$(SRC_DIR)/infinmul.c			\
			$(SRC_DIR)/annex_mul.c			\
			$(SRC_DIR)/infinmod.c			\

SRC_UT_DIR	=	$(realpath .)

# Must list all files containing unit tests

SRC_UT		=  	$(SRC_UT_DIR)/tests_utils.c		\

OBJ		=  	$(SRC:.c=.o) $(SRC_UT:.c=.o)

CFLAGS		= 	-Wall -Wextra --coverage $(INCLUDE)

INCLUDE 	=	-I../include

LDFLAGS		=	-lcriterion -lgcov -L../lib/my -lmy

NAME		= 	units

all:	comp

comp:	$(OBJ)
	cc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ) *~ $(SRC_DIR)/*.g* $(SRC_UT_DIR)/*.g* *#

fclean:	clean
	rm -f $(NAME)

re:	fclean	all

.PHONY: clean fclean re
