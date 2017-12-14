/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** str isupper
*/

int	my_str_isupper(char const *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (str[i] > 64 && str[i] < 91)
			i += 1;
		else
			return (0);
	}
	return (1);
}
