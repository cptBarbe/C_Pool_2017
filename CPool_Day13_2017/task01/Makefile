##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-lc-graph_prog

all : $(NAME)

$(NAME) :
	make re
	gcc -c $(SRC) $(CFLAGS) -I include
	gcc -o $(NAME) $(OBJ) -L lib/ -lmy
	gcc $(CFLAGS) $(SRC)

clean :
	make clean -C lib/my
	rm -f *~
	rm -f \#*\#
	rm -f *.out
	rm -f $(OBJ)

fclean : clean
	make fclean -C lib/my
	rm -f $(NAME)

re : fclean all
