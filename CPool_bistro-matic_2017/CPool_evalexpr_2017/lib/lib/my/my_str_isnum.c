/*
** EPITECH PROJECT, 2017
** my_str_isnum
** File description:
** str isnum
*/

int my_str_isnum(char const *str)
{
	int i = 0;

	while ((str[i] >= 48 && str[i] <= 57)
		&& (str[i] != '\0')) {
		i = i + 1;
	}
	if (i == my_strlen(str))
		return (1);
	else
		return (0);

}
