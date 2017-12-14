/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** square root
*/

int	my_compute_square_root(int nb)
{
	unsigned int	i = 0;

	if (nb < 0)
		return (0);
	while (i <= nb) {
		if (i * i == nb)
			return (i);
		i += 1;
	}
	return (0);
}
