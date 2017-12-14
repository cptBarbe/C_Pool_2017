/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** error_handler
*/

#include "my.h"
#include "rush2.h"

int	error_handling_str(char *str)
{
	unsigned int	i = 0;
	unsigned int	nb = 0;

	while (str[i] != '\0') {
		if ((str[i] >= 'A' && str[i] <= 'Z') ||
		(str[i] >= 'a' && str[i] <= 'z'))
			nb += 1;
		i += 1;
	}
	if (nb > 0)
		return (0);
	write(2, "No letters in str.\n", 19);
	return (84);
}

int	error_handling(int ac, char **av)
{
	signed int	i = 0;

	while (i < ac - 2) {
		if (my_strlen(av[2 + i]) > 1) {
			write(2, "One letter at a time.\n", 22);
			return (84);
		}
		if (av[2 + i][0] < 'A' || (av[2 + i][0] > 'Z' &&
		av[2 + i][0] < 'a') || av[2 + i][0] > 'z') {
			write(2, "No letter to find.\n", 19);
			return (84);
		}
		i += 1;
		if (error_handling_str(av[1]) == 84)
			return (84);
	}
	return (0);
}
