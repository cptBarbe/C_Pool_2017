/*
** EPITECH PROJECT, 2017
** my_isneg
** File description:
** isneg
*/

#include "../../include/my.h"

int my_isneg(int n)
{
	int parameter;

	if (n >= 0)
		parameter = 'P';
	else
		parameter = 'N';
	my_putchar(parameter);
	return (0);
}
