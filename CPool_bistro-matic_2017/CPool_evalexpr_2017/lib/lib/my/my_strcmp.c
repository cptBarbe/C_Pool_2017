/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** str cmp
*/

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;
	int j = 0;
	int dif = 0;

	while (s1[i] == s2[j]) {
		if (s1[i] == '\0')
			return (0);
		i = i + 1;
		j = j + 1;
	}
	dif = s1[i] - s2[j];
	return (dif);
}
