/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** print the character string passed in parameter
*/

#include <unistd.h>

void my_putchar(char);

int my_putstr(char const *str)
{
	while (*str != '\0') {
		my_putchar(*str);
		str = str + 1;
	}
	return (0);
}
