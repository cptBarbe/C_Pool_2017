/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** strlen
*/

int my_strlen(char const *str)
{
	int n = 0;

	while(*str) {
		str = str + 1;
		n = n + 1;
	}
	return (n);
}
