/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** capitalize
*/

#include "../../include/my.h"

char *my_strcapitalize(char *str)
{
	int i = 0;

	if (str[0] >= 97 && str[0] <= 122) {
			str[0] = str[0] - 32;
			i = i + 1;
		}
	while ( str[i] != '\0') {
		if (((str[i - 1] >= 65 && str[i -1] <= 90)
		     || (str[i - 1] >= 97 && str[i - 1] <= 122)
		     || (str[i - 1] >= 48 && str[i - 1] <= 57))
		    && (str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		if (((str[i - 1] < 65 || str[i - 1] > 90)
		     && (str[i - 1] < 97 || str[i - 1] > 122)
		     && (str[i - 1] < 48 || str[i - 1] > 57))
		    && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i = i + 1;
	}
	return (str);
}
