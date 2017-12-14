/*
** EPITECH PROJECT, 2017
** my_print_digits
** File description:
**
*/

#include <unistd.h>

int my_print_digits(void)
{
	int number = 48;

	while(number <= 57) {
		my_putchar(number);
		number = number + 1;
	}
	return (0);
}
