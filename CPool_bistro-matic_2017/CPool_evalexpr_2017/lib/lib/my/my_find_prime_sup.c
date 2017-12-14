/*
** EPITECH PROJECT, 2017
** my_find_prime_sup
** File description:
** find prime
*/

int my_find_prime_sup(int nb)
{
	int n = 0;

	if (nb <= 2)
		return (2);
	while (my_is_prime(nb + n) != 1) {
		n = n + 1;
	}
	return (nb + n);
}
