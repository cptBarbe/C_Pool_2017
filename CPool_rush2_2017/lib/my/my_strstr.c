/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** strstr
*/

#include "my.h"

char	*my_strstr(char *str, char *to_find)
{
	signed int	i = 0;
	signed int	j = 0;
	unsigned int	check = 0;

	while (str[i] != '\0') {
		while (str[i + j] == to_find[j] && str[i + j] != '\0'
			&& to_find[j] != '\0')
			j += 1;
		if (str[i] != to_find[j] && to_find[j] != '\0')
			j = 0;
		if (j == my_strlen(to_find)) {
			check = i;
			i = my_strlen(str) - 1;
		}
		i += 1;
	}
	if (j != 0)
		return (&str[check]);
	return (NULL);
}
