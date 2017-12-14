/*
** EPITECH PROJECT, 2017
** infin_subs
** File description:
** infin_subs
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structforinfadd.h"
#include "my.h"

int inta(infadd *counter, char *a)
{
	char a1;

	if (a[counter->i] != '\0') {
		a1 = a[counter->i] - 48;
		return(a1);
	} else {
		a1 = 0;
		return(a1);
	}
}

void longsize(char *a1,char *a2, infadd *cnt)
{
	cnt->cnt1 = my_strlen(a1);
	cnt->cnt2 = my_strlen(a2);
	if (cnt->cnt1 <= cnt->cnt2) {
		cnt->cnt2 = cnt->cnt2 + 1;
		cnt->cnt1 = 0;
	} else {
		cnt->cnt1 = cnt->cnt1 + 1;
		cnt->cnt2 = 0;
	}
}

int calc(infadd *result, char *a, char *b)
{
	char a1;
	char b1;
	int counter = 0;

	while (counter != result->cnt1 + result->cnt2 + 1) {
		a1 = inta(result, a);
		b1 = inta(result, b);
		result->i++;
		counter++;
		result->tmp = a1 + b1 + result->carry;
		result->res[result->j] = result->tmp%10;
		if (result->res[result->j] >= 10) {
			result->res[result->j] = result->res[result->j] %10;
			result->carry++;
		}
		result->carry = result->tmp / 10;
		result->j++;
	}
	result->carry = 0;
	return (0);
}

char *infin_add(char *a, char *b)
{
	infadd result;
	char *a1;
	char *b1;
	int lenghta = my_strlen(a);
	int lenghtb = my_strlen(b);

	longsize(a, b, &result);
	a1 = malloc(sizeof(char) * lenghta + 1);
	b1 = malloc(sizeof(char) * lenghtb + 1);
	a1 = my_revstr(a);
	b1 = my_revstr(b);
	result.carry = 0;
	result.res = malloc(sizeof(char) * (result.cnt1 + result.cnt2) + 1);
	result.i = 0;
	calc(&result, a1, b1);
	result.res[result.j] = '\0';
	result.j = 0;
	result.res = my_revstr(result.res);
	return (result.res);
}
