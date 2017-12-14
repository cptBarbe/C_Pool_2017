/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** str cat
*/

char *my_strcat(char *dest, char const *src)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0') {
		n = n + 1;
	}
	while (src[i] != '\0') {
		dest[n + i] = src[i];
		i = i + 1;
	}
	dest[n + i] = '\0';
	return (dest);
}
