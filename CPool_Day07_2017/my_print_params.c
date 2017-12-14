/*
** EPITECH PROJECT, 2017
** my_print_params
** File description:
** my_print_params
*/

void my_putchar(char);
int my_putstr(char *);

int main(int argc, char **argv)
{
	int i = 0;

	while (i != argc) {
		my_putstr(argv[i++]);
		my_putchar('\n');
	}
	return (0);
}
