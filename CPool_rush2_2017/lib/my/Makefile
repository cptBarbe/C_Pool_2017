##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_coumpute_power_rec.c		\
		my_coumpute_square_root.c	\
		my_epur_str.c			\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_isneg.c			\
		my_is_prime.c			\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_showmen.c			\
		my_showstr.c			\
		my_show_word_array.c		\
		my_sort_int_array.c		\
		my_strcapitalize.c		\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c		\
		my_str_isupper.c		\
		my_strlen.c			\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c			\
		my_strupcase.c			\
		my_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):
	gcc -c $(SRC) -I ./
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../
	cp my.h ../../include

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf ../$(NAME)
	rm -rf $(NAME)

re:	fclean all
