/*
** EPITECH PROJECT, 2017
** my_compute_mactorial-it
** File description:
** print the factorial of the number passed in parameter
*/

int my_compute_factorial_it(int nb)
{
	int n = 1;
	int result = 1;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (n <= nb) {
		result = result * n;
		n = n + 1;
	}
	return (result);
}
