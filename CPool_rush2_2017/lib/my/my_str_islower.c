/*
** EPITECH PROJECT, 2017
** my_str_islower
** File description:
** str islower
*/

int	my_str_islower(char const *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (str[i] > 96 && str[i] < 123)
			i += 1;
		else
			return (0);
	}
	return (1);
}
