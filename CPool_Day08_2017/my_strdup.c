/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
	char *dest = malloc(sizeof(char) * my_strlen(src));
	my_strcpy(dest, src);
	return (dest);
}
