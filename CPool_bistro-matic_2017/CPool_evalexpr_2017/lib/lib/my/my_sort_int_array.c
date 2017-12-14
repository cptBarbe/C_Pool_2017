/*
** EPITECH PROJECT, 2017
** my_sort_in_array
** File description:
** sort array
*/

#include "../../include/my.h"

void my_sort_int_array(int *tab, int size)
{
	int i = 0;
	int swap = 0;

	while (i < size) {
		if (tab[i] > tab[i + 1]) {
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		else
			i = i + 1;
	}
}
