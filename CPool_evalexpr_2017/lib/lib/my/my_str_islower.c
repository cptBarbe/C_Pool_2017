/*
** EPITECH PROJECT, 2017
** my_str_islower
** File description:
** str islower
*/

int my_str_islower(char const *str)
{
	int i = 0;
	while ((str[i] >= 97 && str[i] <= 122)
	       && (str[i] != '\0')) {
		i = i + 1;
        }
	if (i == my_strlen(str))
		return (1);
        else
		return (0);
}
