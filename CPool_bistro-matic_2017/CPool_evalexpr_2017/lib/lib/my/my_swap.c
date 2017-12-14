/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** swap
*/

int my_swap(int *a, int *b)
{
	int c = 0;
	c = *b;
	*b = *a;
	*a = c;
	return (0);
}
