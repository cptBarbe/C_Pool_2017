/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** swapping
*/

void	my_swap(int *a, int *b)
{
	signed int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
