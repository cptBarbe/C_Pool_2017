/*
** EPITECH PROJECT, 2017
** my_is_prime
** File description:
** is prime
*/

int	my_is_prime(int nb)
{
	unsigned int	i = 1;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0 && i != 1 && i != nb)
			return (0);
		i += 1;
	}
	return (1);
}
