/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** power rec
*/

int my_compute_power_rec(int nb, int p)
{
	int value = nb;
	int pow = p;

	if (p == 0)
		return (1);
	if (p < 0 || value > 2147483647)
		return (0);
	if (pow <= 0)
		return (value);
	value = nb * my_compute_power_rec(value, pow - 1);
}
