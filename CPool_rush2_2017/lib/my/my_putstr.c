/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** put str
*/

#include "my.h"

int	my_putstr(char const *str)
{
	unsigned int	i = -1;

	while (str[++i] != '\0')
		my_putchar(str[i]);
	return (0);
}
