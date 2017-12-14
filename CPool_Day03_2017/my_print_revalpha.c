/*
** EPITECH PROJECT, 2017
** my_print_revalpha
** File description:
**
*/

#include <unistd.h>

int my_print_revalpha(void)
{
	int letter = 122;

	while(letter >= 97) {
		my_putchar(letter);
		letter = letter - 1;
	}
	return (0);
}
