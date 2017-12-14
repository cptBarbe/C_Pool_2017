/*
** EPITECH PROJECT, 2017
** my_str_isupper
** File description:
** str isupper
*/

int my_str_isupper(char const *str)
{
	int i = 0;

	while ((str[i] >= 65 && str[i] <= 90)
		&& (str[i] != '\0'))
		i = i + 1;
	if (i == my_strlen(str))
		return (1);
	else
		return (0);
}
