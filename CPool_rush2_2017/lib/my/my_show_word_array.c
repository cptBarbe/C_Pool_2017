/*
** EPITECH PROJECT, 2017
** my_show_word_array
** File description:
** show word array
*/

#include "my.h"

int	my_show_word_array(char * const *tab)
{
	unsigned int	i = 0;

	while (tab[i] != NULL) {
		my_putstr(tab[i]);
		my_putchar('\n');
		i += 1;
	}
	return (0);
}
