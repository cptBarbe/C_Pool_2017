/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** revstr
*/

#include "my.h"

char	*my_revstr(char *str)
{
	unsigned int	i = 0;
	unsigned int	j = my_strlen(str);
	unsigned char	c;

	while (i < j) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i += 1;
		j += 1;
	}
	return (str);
}
