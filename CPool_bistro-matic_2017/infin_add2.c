/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** infin_add
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structforinfadd.h"
#include "include/my.h"

int countercalcless(infadd *less, char a1, char b1)
{
	if (less->carry2 == 1)
		a1 = a1 - less->carry2;
	less->carry = (a1 < b1) ? 10 : 0;
	if (less->carry == 10)
		less->tmp = (a1 + less->carry) - b1;
	else
		less->tmp = a1 - b1;
	less->carry2 = 0;
	return (0);
}

int calcless(infadd *less)
{
	char a1;
	char b1;
	int counter = 0;

	while (counter != less->cnt1 + less->cnt2 + 1) {
		a1 = inta(less, less->cpchara);
		b1 = inta(less, less->cpcharb);
		less->i++;
		counter++;
		countercalcless(less, a1, b1);
		less->res[less->j] = less->tmp%10;
		if (less->carry == 10)
			less->carry2 = 1;
		else
			less->carry = 0;
		less->carry = less->tmp / 10;
		less->res[less->j] = less->res[less->j] + 48;
		less->j++;
	}
	less->carry = 0;
	return (0);
}

int management_less2(infadd *less, char *a, char *b)
{
	if (my_strlen(a) < my_strlen(b))
		revers_2char(less);
	if (my_strlen(a) == my_strlen(b))
		return (0); //conter
	else {
		return(0);
	}
	return (0);
}

int management_less(infadd *less, char *a, char *b)
{
	if ((a[0] == '-' && b[0] == '-') || (a[0] != '-' && b[0] != '-'))
		return (0);
	if (a[0] == '-') {
		a++;
		less->cpchara = a;
		less->cpcharb = b;
	}
	if (b[0] == '-') {
		b++;
		less->cpcharb = b;
		less->cpchara = a;
	}
	if (my_strlen(a) > my_strlen(b))
		less->lessa = '-';
	if (my_strlen(b) > my_strlen(a))
		less->lessb = '-';
	management_less2(less, a, b);
	return (0);
}
