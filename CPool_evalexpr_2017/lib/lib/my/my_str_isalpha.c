/*
** EPITECH PROJECT, 2017
** my_str_str_isalpha
** File description:
** string isalpha
*/

int my_str_isalpha(char const *str)
{
	int i = 0;

	while (((str[i] >= 65 && str[i] <= 90)
		|| (str[i] >= 97 && str[i] <= 122))
		&& (str[i] != '\0')) {
		i = i + 1;
	}
	if (i == my_strlen(str))
		return (1);
	else
		return (0);
}
