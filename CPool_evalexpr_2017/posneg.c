/*
** EPITECH PROJECT, 2017
** posneg
** File description:
** posneg
*/

char *pos_neg(char **av, int i, char **dest)
{
	int posneg = 1;
	int j = 0;
	int c = 0;

	while (av[i][j] == '-' || av[i][j] == '+') {
		if (av[i][j] == '-')
			posneg = posneg * (-1);
		j = j + 1;
	}
	if (posneg == -1)
		dest[i][0] = '-';
	while (av[i][j] >= 48 && av[i][j] <= 57) {
		if (dest[i][0] == '-')
			c = 1;
		dest[i][c] = av[i][j];
		c = c + 1;
		j = j + 1;
	}
	i = i + 1;
	return (dest[i]);
}
