/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** strlen
*/

int	my_strlen(char const *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0')
		i += 1;
	return (i);
}
