/*
** EPITECH PROJECT, 2017
** my_strcapitalize
** File description:
** strcapitalize
*/

#include "my.h"

char	*my_strcapitalize(char *str)
{
	unsigned int	i = 0;

	my_strlowcase(str);
	while (str[i] != '\0') {
		if (str[i] > 96 && str[i] < 123 && i == 0) {
			str[i] -= 32;
			i += 1;
		}
		else if ((str[i] > 96 && str[i] < 123) &&
			(str[i - 1] < 48 ||
			(str[i - 1] > 57 && str[i - 1] < 65)
			|| (str[i - 1] > 90 && str[i - 1] < 97)
			|| str[i - 1] > 122)) {
			str[i] -= 32;
			i += 1;
		} else
			i += 1;
	}
	return (str);
}
