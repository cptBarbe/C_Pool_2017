/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** getnbr
*/

int	my_pow(int len)
{
	unsigned int	i = 1;
	unsigned int	rslt = 1;

	while (i < len) {
		rslt *= 10;
		i += 1;
	}
	return (rslt);
}

long	get_nbr(char const *str, int len)
{
	signed long	nb = 0;
	unsigned int	power = my_pow(len);
	unsigned int	i = 0;

	while (str[i] == 43 || str[i] == 45 && str[i] != '\0')
		i += 1;
	while (power >= 1) {
		nb += (str[i] - 48) * power;
		power /= 10;
		i += 1;
	}
	return (nb);
}

int	size_nb(char const *str)
{
	unsigned int	i = 0;
	unsigned int	size = 0;

	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58 ||
					str[i] == 43 || str[i] == 45)) {
		if (str[i] < 58 && str[i] > 47)
			size += 1;
		i += 1;
	}
	return (size);
}

int	my_getnbr(char const *str)
{
	signed long	nb;
	unsigned int	i = 0;

	if (size_nb(str) == 0 || size_nb(str) > 10)
		return (0);
	nb = get_nbr(str, size_nb(str));
	while (str[i] > 57 || str[i] < 48 && str[i] != '\0') {
		if (str[i] == '-')
			nb = -nb;
		i += 1;
	}
	if (nb < -2147483648 || nb > 2147483647)
		return (0);
	(int)(nb);
	return (nb);
}
