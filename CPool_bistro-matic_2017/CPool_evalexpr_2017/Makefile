##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	main.c		\
		priority.c	\

NAME	=	eval_expr

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -pedantic

all:	$(NAME)

$(NAME):
	make re -C lib/my
	gcc -o $(NAME) $(CFLAGS) $(SRC) -L./lib/my -lmy

clean:
	make clean -C lib/my
	rm -rf *~
	rm -rf \#*\#
	rm -rf *.out
	rm -rf *$(OBJ)

fclean:	clean
	make fclean -C lib/my
	rm -rf $(NAME)

re:	fclean clean all
