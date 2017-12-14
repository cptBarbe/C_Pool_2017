/*
** EPITECH PROJECT, 2017
** my_print_alpha
** File description:
**
*/

#include <unistd.h>

int my_print_alpha(void)
{
	int letter = 97;

	while (letter <= 122) {
		my_putchar(letter);
		letter = letter + 1;
	}
	return (0);
}
