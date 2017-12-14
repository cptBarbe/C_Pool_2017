/*
** EPITECH PROJECT, 2017
** my_epur_str
** File description:
** epur str
*/

int	my_isgood(char c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);    
}

char	*fill_new(char *str, int i)
{
	while (str[i] != '\0' || str[i - 1] != '\0') {
		str[i] = str[i + 1];
		i += 1;
	}
	return (str);
}

char	*clear_str(char *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (my_isgood(str[i]) == 0)
			str[i] = ' ';
		i += 1;
	}
	while (my_isgood(str[0]) != 1)
		str = fill_new(str, 0);
	return (str);
}

char	*my_epur_str(char *str)
{
	signed int	i = 0;

	str = clear_str(str);
	while (str[i] != '\0') {
		if (str[i] == ' ' && (str[i + 1] == ' ' ||
					str[i + 1] == '\0')) {
			str = fill_new(str, i);
			i = 0;
		}
		i += 1;
	}
	i = 0;
	while (str[i] == ' ' && str[i] != '\0') {
		if (my_isgood(str[i]) == 0)
			str = fill_new(str, 0);
		i += 1;
	}
	return (str);
}
