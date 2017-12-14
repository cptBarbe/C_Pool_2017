/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** square root
*/

int my_compute_square_root(int nb)
{
	int p = 1;
	int square;

	while (square != nb) {
		square = p * p;
		p = p + 1;
	}
	if (square > nb || square > 2147483647 || nb <= 0)
		return (0);
	else
		return (p - 1);
}
