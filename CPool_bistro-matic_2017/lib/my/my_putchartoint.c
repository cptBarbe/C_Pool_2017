/*
** EPITECH PROJECT, 2017
** my_putchartoint
** File description:
** print the character string passed in parameter
*/

#include <unistd.h>

void my_putchar(char);

int my_putchartoint(char const *str)
{
	while (*str != '\0') {
		my_putchar(*str + 48);
		str++;
	}
	return (0);
}
