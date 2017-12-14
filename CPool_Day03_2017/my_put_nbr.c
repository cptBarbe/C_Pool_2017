/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** putnbr
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
	int result = 0;

	write(1, (&nb - 48), 1);
	return (result);
}

int main()
{
	my_put_nbr(42);
	return (0);
}
