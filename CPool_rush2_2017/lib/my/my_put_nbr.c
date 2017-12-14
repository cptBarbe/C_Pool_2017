/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** put nbr
*/

#include "my.h"

void	put_char()
{
	my_putchar('-');
	my_putchar('2');
	my_putchar('4');
	my_putchar('7');
	my_putchar('4');
	my_putchar('8');
	my_putchar('3');
	my_putchar('6');
	my_putchar('4');
	my_putchar('8');
}

int    my_put_nbr(int nb)
{
	if (nb < -2147483648 || nb > 2147483647)
		return (0);
	if (nb == -2147483648) {
		put_char();
		return (1);
	}
	else if (nb < 0) {
		my_putchar('-');
		nb *= -1;
	}
	if (nb / 10)
		my_put_nbr(nb / 10);
	my_putchar(nb % 10 + 48);
	return (1);
}
