/*
** EPITECH PROJECT, 2017
** infinadd
** File description:
** infinadd
*/

#include "my.h"
#include <stdio.h>
#define VAL(x) (x - '0')
#define ASCII(x) (x + '0')

char *infinadd(char *op1, char *op2)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	int carry = 0;
	char *result;

	op1 = my_revstr(op1);
	op2 = my_revstr(op2);
	while (op1[i] != '\0') {
		if (tmp >= 10)
			carry = tmp / 10;
		result[j++] = op1[i++] + op2[i++];
	}
	my_revstr(result);
	my_putstr(result);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 3)
		return (84);
	infinadd("12", "12");
	return (0);
}
