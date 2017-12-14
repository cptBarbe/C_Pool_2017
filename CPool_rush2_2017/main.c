/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** main
*/

#include "my.h"
#include "rush2.h"

void	my_putfloat(float nb)
{
	unsigned int	result = nb;

	my_putchar(' ');
	my_putchar('(');
	my_put_nbr(result / 100);
	my_putchar('.');
	my_put_nbr(result - result / 100 * 100);
	my_putchar('%');
	my_putchar(')');
	my_putchar('\n');
}

float	percents(int nb, char *str)
{
	float	result;

	result = nb * 10000 / my_special_len(str);
	return (result);
}

int	nb_of_letters(char *str, char c)
{
	unsigned int	i = 0;
	unsigned int	nb = 0;

	while (str[i] != '\0') {
		if (str[i] == c)
			nb += 1;
		i += 1;
	}
	my_putchar(c);
	my_putchar(':');
	my_put_nbr(nb);
	return (nb);
}

int	print_rslt(int ac, char **av)
{
	signed int	i = 0;
	char		c;
	float		freq;

	while (i < ac - 2) {
		c = av[2 + i][0];
		freq = percents(nb_of_letters(av[1], c), av[1]);
		my_putfloat(freq);
		i += 1;
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac < 3)
		return (84);
	if (error_handling(ac, av) == 84)
		return (84);
	if (print_rslt(ac, av) == 84)
		return (84);
	guess_language(av[1]);
	return (0);
}
