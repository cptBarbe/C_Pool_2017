/*
** EPITECH PROJECT, 2017
** my_strncmp
** File description:
** strn cmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;
	int j = 0;
	int dif = 0;

	while (s1[i] == s2[j]) {
		if (i == n)
			return (0);
		i = i + 1;
		j = j + 1;
	}
	dif = s1[i] - s2[j];
	return (dif);
}
