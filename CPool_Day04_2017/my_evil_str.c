/*
** EPITECH PROJECT, 2017
** my_evil_str
** File description:
**	print a character string forwards and backwards
*/

#include <unistd.h>

char *my_evil_str(char *str)
{
	int n = 0;

	while (*str != '\0') {
		str = str + 1;
		n = n + 1;
		}
	while (*str >= (*str - n)) {
		my_putchar(*str);
		str = str - 1;
		n = n - 1;
        }
	return (str);
}
