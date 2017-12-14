/*
** EPITECH PROJECT, 2017
**  my_putstr
** File description:
** putstr
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
	while(*str != '\0') {
		my_putchar(*str);
		str = str + 1;
	}
	return (0);
}
