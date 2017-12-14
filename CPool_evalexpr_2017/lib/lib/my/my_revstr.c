/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** reverse string
*/

char *my_revstr(char *str)
{
	int i = 0;
	int j = my_strlen(str) - 1;
	char tmp;

	if (j == -1)
		return (str);
	while (j > i) {
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j = j - 1;
		i = i + 1;
	}
	return (str);
}
