/*
** EPITECH PROJECT, 2017
** my_strupcase
** File description:
** strupcase
*/

char	*my_strupcase(char *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i += 1;
	}
	return (str);
}
