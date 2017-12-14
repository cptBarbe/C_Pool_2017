/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** put nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
	unsigned int n;

	if (nb < -2147483648 || nb > 2147483647)
		return (0);
	if (nb == -2147483648) {
		my_putstr("-2147483648");
		return (0);
	}
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		my_put_nbr(nb / 10);
	n = nb % 10;
	my_putchar(n + 48);
	return (0);
}
