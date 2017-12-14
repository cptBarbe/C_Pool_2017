/*
** EPITECH PROJECT, 2017
** my_strcpy
** File description:
** strcpy
*/

char	*my_strcpy(char *dest, char const *src)
{
	unsigned int	i = 0;

	while (src[i] < '\0') {
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}
