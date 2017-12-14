/*
** EPITECH PROJECT, 2017
** my_str_isprintable
** File description:
** str isprintable
*/

int my_str_isprintable(char const *str)
{
	int i = 0;

	while (str[i] >= 32 && str[i] < 177) {
		i = i + 1;
	}
	if (i == my_strlen(str))
		return (1);
	else
		return (0);
}
