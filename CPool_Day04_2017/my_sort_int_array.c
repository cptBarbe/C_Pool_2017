/*
** EPITECH PROJECT, 2017
** my_sort_int_array
** File description:
** my_sort_int_array
*/

void my_sort_int_array(int *array, int size)
{
	int n1 = 0;
	int n2 = 0;

	while (array[n2] != '\0') {
		if (array[n1] > array[n2]) {
			my_swap(array[n1], array[n2]);
		} else {
			n1++;
			n2++;
		}
	}
}

int main()
{
	my_sort_int_array();
	return (0);
}
