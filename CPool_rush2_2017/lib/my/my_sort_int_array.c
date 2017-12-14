/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** sort int array
*/

void	my_sort_int_array(int *array, int size)
{
	signed int	i = 0;
	signed int	temp = 0;

	while (i != size) {
		if (array[i] > array[i + 1]) {
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = 0;
		} else
			i += 1;
	}
}
