/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** strncat
*/

#include "my.h"

char	*my_strncat(char *dest, char const *src, int n)
{
	unsigned int	i = my_strlen(dest);
	unsigned int	j = 0;

	while (j < n) {
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	dest[i] = '\0';
	return (dest);
}
