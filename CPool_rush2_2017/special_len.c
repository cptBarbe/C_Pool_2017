/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** special len
*/

int	my_special_len(char *str)
{
	unsigned int	i = 0;
	unsigned int	nb = 0;

	while (str[i] != '\0') {
		if ((str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= 'a' && str[i] <= 'z'))
			nb += 1;
		i += 1;
	}
	return (nb);
}
