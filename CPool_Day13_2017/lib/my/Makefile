##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

NAME	=	test

SRC	=	my_compute_power_it.c		\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_find_prime_sup.c		\
		my_getnbr.c			\
		my_isneg.c			\
		my_is_prime.c			\
		my_print_revalpha.c		\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_showstr.c			\
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
		my_swap.c			\

OBJ	=	$(SRC:.c=.o)

LIN_NAME	=	libmy.a

all : $(NAME)

$(NAME) : $(OBJ)
	gcc -o $(NAME) $(OBJ)

lib_compile :
	gcc -c $(SRC)

lib : lib_compile
	ar rc $(LIB_NAME) $(OBJ)
	cp $(LIB_NAME) lib
	cp my.h include

clean :
	rm -f $(OBJ)
	rm -f *~
	rm -f \#*\#

fclean : clean
	rm -f $(NAME)

re : fclean all
