/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** strcat
*/

#include "my.h"

char	*my_strcat(char *dest, char const *src)
{
	unsigned int	i = my_strlen(dest);
	unsigned int	j = 0;

	while (i < my_strlen(dest) + my_strlen(src)) {
		dest[i] = src[j];
		i += 1;
		j += 1;
	}
	dest[i] = '\0';
	return (dest);
}
