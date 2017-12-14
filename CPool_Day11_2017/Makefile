##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_params_to_list.c

NAME	=	a.out

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -pedantic

all:	$(NAME)

$(NAME):
	make re -C lib/my
	gcc -c $(SRC) $(CFLAGS) -I include/
	gcc -o $(NAME) $(OBJ) -L lib/ -lmy

clean:
	make clean -C lib/my
	rm -rf *~
	rm -rf \#*\#
	rm -rf *.out
	rm -rf $(OBJ)

fclean:	clean
	make fclean -C lib/my
	rm -rf $(NAME)

re:	fclean all
