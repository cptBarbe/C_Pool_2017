/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** str is printable
*/

int	my_str_isprintable(char const *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (str[i] > 31 && str[i] != 127)
			i += 1;
		else
			return (0);
	}
	return (1);
}
