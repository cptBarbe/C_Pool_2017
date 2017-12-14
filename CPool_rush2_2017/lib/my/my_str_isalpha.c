/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** str isalpha
*/

int	my_str_isalpha(char const *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (str[i] > 64 && str[i] < 90 || str[i] > 96 && str[i] < 122)
			i += 1;
		else
			return (0);
	}
	return (1);
}
