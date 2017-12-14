/*
** EPITECH PROJECT, 2017
** my_showstr
** File description:
** showstr
*/

#include "my.h"

int     my_putnbr_base(int nbr, char const *base)
{
	if (nbr < -2147483648 || nbr > 2147483647)
		return (0);
	if (nbr < 0) {
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr / my_strlen(base))
		my_putnbr_base(nbr / my_strlen(base), base);
	my_putchar(base[nbr % my_strlen(base)]);
	return (1);
}

void	my_show(char const *str, int i)
{
	my_putchar('\\');
	if (str[i] < 16)
		my_putchar('0');
	my_putnbr_base((int)(str[i]), "0123456789abcdef");
}

int	my_showstr(char const *str)
{
	unsigned int	i = 0;

	if (my_str_isprintable(str) == 0) {
		my_putstr(str);
		return (0);
	}
	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] == 127) {
			my_show(str, i);
		} else
			my_putchar(str[i]);
		i += 1;
	}
	return (0);
}
