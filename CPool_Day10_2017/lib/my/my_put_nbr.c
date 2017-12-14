/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
**
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
	write(1, &nb, 1);
	return (0);
}
