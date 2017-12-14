/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** strncpy
*/

char	*my_strncpy(char *dest, char const *src, int n)
{
	unsigned int	i = 0;

	while(i < n || src[i] != '\0') {
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}
