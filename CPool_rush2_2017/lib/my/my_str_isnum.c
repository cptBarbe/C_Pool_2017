/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** str isnum
*/

int	my_str_isnum(char const *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (str[i] > 47 && str[i] < 58)
			i += 1;
		else
			return (0);
	}
	return (1);
}
