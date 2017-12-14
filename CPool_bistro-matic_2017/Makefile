##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	main.c			\
		errors.c		\
		infin_add.c		\
		infin_subs.c		\
		checks.c		\

NAME	=	calc

CFLAGS	=	-W -Wall -Werror -Wextra -pedantic

all:	$(NAME)

$(NAME):
	make -C lib/my
	gcc -o $(NAME) $(CFLAGS) $(SRC) -L./lib/my -lmy

clean:
	make clean -C lib/my
	rm $(NAME)
	rm *~
	rm \#*
	rm .\#*
	rm a.out

fclean:	clean
	make fclean -C lib/my
	rm $(NAME)

re:	fclean clean all
