/*
** EPITECH PROJECT, 2017
** rush
** File description:
** display a square on the screen
*/

void display_line(int x, char left, char center, char right)
{
	int length = 1;

	if (length == 1)
		my_putchar(left);
	for (length = 1; length <= x - 2; length++)
		my_putchar(center);
	if (length == x - 1)
		my_putchar(right);
	my_putchar('\n');
}

void display_column(int y, char top, char center, char bottom)
{
	int height = 1;

	if (height == 1) {
		my_putchar(top);
		my_putchar('\n');
	}
	for (height = 1; height <= y - 2; height++) {
		my_putchar(center);
		my_putchar('\n');
	}
	if (height == y - 1){
		my_putchar(bottom);
		my_putchar('\n');
	}
}

void rush(int x, int y)
{
	int i;

	if (x <= 0 || y <= 0)
		write(2, "Invalid size\n", 13);
	if (y == 1)
		display_line(x, 'B', 'B', 'B');
	else if (x == 1)
		display_column(y, 'B', 'B', 'B');
	if (x >= 2 && y >= 2) {
		display_line(x, 'A', 'B', 'A');
		for (i = 1; i <= y - 2; i++) {
			display_line(x, 'B', ' ', 'B');
		}
		display_line(x, 'C', 'B', 'C');
	}
}
