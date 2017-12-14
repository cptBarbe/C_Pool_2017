/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** return the length of the string passed in parameter
*/

int my_strlen(char const *str)
{
	int n = 0;

	while (*str != '\0') {
                str = str + 1;
		n = n + 1;
	}
	return (n);
}
