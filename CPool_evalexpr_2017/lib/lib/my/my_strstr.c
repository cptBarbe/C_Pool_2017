/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** string string
*/

int find_str(char const *str, char const *to_find, int i, int j)
{
	while (str[j] != to_find[i])
		j = j + 1;
	while (str[j] == to_find[i]) {
		if (str[j + 1] != to_find[i + 1]
		    && to_find[i + 1] != '\0') {
			j = j + 1;
			find_str(str, to_find, i, j);
		} else {
			i = i + 1;
			j = j + 1;
		}
	}
	j = j - i;
	return (j);
}

char *my_strstr(char const *str, char const *to_find)
{
	int i = 0;
	int j = 0;

	j = find_str(str, to_find, i, j);
	return ((char *)&str[j]);
}
