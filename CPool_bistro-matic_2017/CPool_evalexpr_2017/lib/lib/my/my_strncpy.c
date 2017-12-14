/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** copy n character
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;

	if (n > my_strlen(src))
		n = my_strlen(src);
	while (src[i] != src[n]) {
		dest[i] = src[i];
		i = i + 1;
	}
	dest[i] = '\0';
	return (dest);
}
