/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
**	print a character string forwards and backwards
*/

#include <unistd.h>

char *my_revstr(char *str)
{
	int n = 0;

	while (*str != '\0') {
		str = str + 1;
		n = n + 1;
		}
	while (*str >= (*str - n)) {
		str = str - 1;
		n = n - 1;
        }
	return (str);
}
