/*
** EPITECH PROJECT, 2017
** my_get_nbr
** File description:
** get nbr
*/

int my_getnbr(char const *str)
{
	int i = 0;
	long nb = 0;
	int posneg = 1;

	while ((str[i] < 48 || str[i] > 57) && str[i] != '\0') {
		if (str[i] == '-')
			posneg = posneg * (-1);
		i = i + 1;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0') {
		if (nb > 2147483647)
			return (0);
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i = i + 1;
	}
	nb = nb * posneg;
	return (nb);
}
