/*
** EPITECH PROJECT, 2017
** my_strlowcase
** File description:
** strlowcase
*/

char	*my_strlowcase(char *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i += 1;
	}
	return (str);
}
