/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** copy n characters of a string into another
*/

#include <unistd.h>

char *my_strncpy(char *dest, char const *src , int n)
{
	int i = 0;

	while (dest[i] != '\0') {
		dest[i] = src[i];
		i = i + 1;
		dest[n] = '\0';
		if (dest[i] == dest[n])
			return (0);
	}
	return (dest);
}
