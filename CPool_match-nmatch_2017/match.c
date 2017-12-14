/*
** EPITECH PROJECT, 2017
** match
** File description:
** match
*/

#include "my.h"

int match(char *str1, char *str2)
{
	int i;

	while (str1[i] == str2[i]) {
		if (str1[i] == '*' || str2[i] == '*') {
			my_putstr("Match\n");
			return (1);
		}
		if (str1[i] != str2[i]) {
			my_putstr("No match\n");
			return (0);
		}
		if (str1[i] == '\0' || str2[i] == '\0') {
			my_putstr("Match\n");
			return (1);
		}
		i++;
	}
	my_putstr("No match\n");
	return (0);
}
