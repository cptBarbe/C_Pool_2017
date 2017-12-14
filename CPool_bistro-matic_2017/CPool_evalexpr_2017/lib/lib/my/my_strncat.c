/*
** EPITECH PROJECT, 2017
** my_strncat
** File description:
** strn cat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0') {
		n = n + 1;
	}
	while (src[i] != '\0') {
		if (i == nb)
			return(dest);
		dest[n + i] = src[i];
		i = i + 1;
	}
	dest[n + 1] = '\0';
	return (dest);
}
