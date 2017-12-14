/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** my_strncat
*/

#include <string.h>

int my_strlen(char const *);

char *my_strcat(char *dest, char const *src, int nb)
{
	int i = my_strlen(dest);
	int j = 0;

	while (src[j] != nb) {
		dest[i++] = src[j++];
	}
	return (0);
}
