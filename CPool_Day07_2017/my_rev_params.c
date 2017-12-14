/*
** EPITECH PROJECT, 2017
** my_rev_params
** File description:
** my_rev_params
*/

void my_putchar(char);
int my_putstr(char *);

int main(int argc, char **argv)
{
	int i = argc - 1;

	while (i >= 0) {
		my_putstr(argv[i--]);
		my_putchar('\n');
	}
	return (0);
}
