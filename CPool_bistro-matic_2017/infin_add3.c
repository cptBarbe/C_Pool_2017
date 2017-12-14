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

/*
Je prend la chaine de caracter en entrer, puis je prend le int i de ma struc pour fair -48.
Qui me permer de transformer mon chifre de la table ascii ex: 53 qui et egale a 5, en 5.
Puis je le retourne.
*/

int revers_2char(infadd *less)
{
	char *tmp1 = malloc(sizeof(char) * my_strlen(less->cpcharb) + 1);
	char *tmp2 = malloc(sizeof(char) * my_strlen(less->cpchara) + 1);

	tmp1 = less->cpcharb;
	tmp2 = less->cpchara;
	less->cpchara = tmp1;
	less->cpcharb = tmp2;
	return (0);
}

char *check(infadd *result)
{
	int i = 0;
	int j = 0;
	char *res;

	while (result->res[i] == '0')
		i++;
	res = malloc(sizeof(char) * my_strlen(result->res) + 1 - i);
	while (result->res[i] != '\0') {
		res[j] = result->res[i];
		i++;
		j++;
	}
	result->res = res;
	return (result->res);
}
