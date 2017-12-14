/*
** EPITECH PROJECT, 2017
** count_parentheses
** File description:
** count_parentheses
*/

#include "my.h"

int count_parentheses(char *str)
{
	int i = 0;

	while (*str != '\0') {
		if (*str == '(')
			i++;
		if (*str == ')')
			i--;
		str++;
	}
	return ((i != 0) ? EXIT_FAILURE : EXIT_SUCCESS);
}

int check_syntax(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[0] == ')')
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCES);
}
