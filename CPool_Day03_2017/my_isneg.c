/*
** EPITECH PROJECT, 2017
** my_isneg
** File description:
**
*/

#include <unistd.h>

int my_isneg(int n)
{
	char letter;

	if (n < 0) {
		letter = 'N';
		my_putchar(letter);
	} else {
		letter = 'P';
		my_putchar(letter);
	}
	return (0);
}