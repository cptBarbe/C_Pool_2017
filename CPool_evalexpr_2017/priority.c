/*
** EPITECH PROJECT, 2017
** priority
** File description:
** less to more
*/

#include "my.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int second_calc(int *numb, int i, char *sign)
{
	int result = numb[i];

	while (sign[i] == '*' || sign[i] == '/' || sign [i] == '%') {
		if (sign[i] == '*') {
			result = result * numb[i + 1];
			i++;
		} else if (sign[i] == '/') {
			result = result * (1 / numb[i + 1]);
			i++;
		} else {
			result = result % numb[i + 1];
			i++;
		}
	}
	return (result);
}

int first_calcul(int *numb, char *sign)
{
	int i = 0;
	int result = 0;
	int s = 0;

	while (sign[i] == '+' || sign[i] == '-' ) {
		if (sign[i] == '\0')
			return (result);
		else if (sign[i] == '-' ) {
			result = result + numb[s] - second_calc(numb, i + 1, sign);
			numb[i] = 0;
		} else {
			result = result + numb[s] + second_calc(numb, i + 1, sign);
			numb[i] = 0;
		}
		i++;

	}
	result = second_calc(numb, i, sign);
	if (sign[i] == '+' || sign[i] == '-')
		first_calcul(numb, sign);
	return (result);
}

int *char_to_int(char **dest, int s)
{
	int i = 0;
	int *str;

	str = malloc(sizeof(int) * s);
	while (i != s) {
		str[i] = my_getnbr(dest[i]);
		i++;
	}
	return (str);
}

int pick_values(char *str, int x, int j)
{
	char **dest;
	char *sign;
	int *numb;
	int s = 0;
	int n = 0;
	int k = 0;
	int result;

	dest = malloc(sizeof(char) * (my_strlen(str)));
	sign = malloc(sizeof(char) * (my_strlen(str)));
	while (x < j) {
		dest[s] = malloc(sizeof(char) * my_strlen(str));
		while (str[x] >= 48 && str[x] <= 57) {
			dest[s][n] = str[x];
			n++;
			x++;
		}
		if (str[x] < 48 || str[x] > 57) {
			sign[k] = str[x];
			k++;
			s++;
			n = 0;
		}
		x++;
	}
	numb = char_to_int(dest, s);
	result = first_calcul(numb, sign);
	return (result);
}

int eval_expr(char *str)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int result = 0;

	while (str[i] != '\0') {
		if (str[i] == ')') {
			j = i;
			x = i;
			while (str[i] != '(') {
				x--;
			}
			result = pick_values(str, x, j);
		}
		i++;
	}
	j = my_strlen(str);
	result = result + pick_values(str, x, j);
	return (result);
}
