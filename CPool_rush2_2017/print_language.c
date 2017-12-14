/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** print what language is
*/

#include "my.h"

void	print_language(int i)
{
	if (i == 1)
		write(1, "=> French\n", 10);
	else if (i == 2)
		write(1, "=> German\n", 10);
	else
		write(1, "=> Spanish\n", 11);
}
