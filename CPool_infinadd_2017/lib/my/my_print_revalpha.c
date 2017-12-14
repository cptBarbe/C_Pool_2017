/*
** EPITECH PROJECT, 2017
** my_print_revalpha
** File description:
** print revalpha
*/

int my_putchar(char);

int my_print_revalpha(void)
{
	int letter = 122;

	while(letter >= 97) {
		my_putchar(letter);
		letter = letter - 1;
	}
	return (0);
}
