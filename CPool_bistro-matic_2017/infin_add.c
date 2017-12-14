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

void longsize(infadd *cnt, char *a, char *b)
{
	if (a[0] != '-')
		cnt->cpchara = a;
	if (b[0] != '-')
		cnt->cpcharb = b;
	cnt->cnt1 = my_strlen(cnt->cpchara);
	cnt->cnt2 = my_strlen(cnt->cpcharb);
	if (cnt->cnt1 <= cnt->cnt2) {
		cnt->cnt2 = cnt->cnt2;
		cnt->cnt1 = 0;
	} else {
		cnt->cnt1 = cnt->cnt1;
		cnt->cnt2 = 0;
	}
}

/*
Je conte la longeur de mes deux chaine de caracter je prend la plus grande et jy ajoute un,
si les deux sont de la meme longeur je prend la premier et jy ajoute un.
*/

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
		result->res[result->j] = result->res[result->j] + 48;
		result->j++;
	}
	result->carry = 0;
	return (0);
}

/*
Je prend les deux chiffre que j'ajoute si le chifre et plus grand ou egale a 10 je mais une unites,
qui serra apliquer au prochain chiffre.
*/

char *infin_add(infadd *result, char *a, char *b)
{
	if (a[0] == '-' || b[0] == '-')
		calcless(result);
	else
		calc(result,result->a1, result->b1);
	result->res[result->j] = '\0';
	result->j = 0;
	result->res = my_revstr(result->res);
	return (result->res);
}

/*
  En premier je recuper ma chaine 1 et 2, j'apelle ma structur.
  Je demande a ma fonction longsize la longeur de mais deux chaine que je stock dans ma struc.
  Je fais une copie de a et b pour les rev, je malloc resulta(res) longeur de la plus grande chaine.
  J'envoi le tout dans ma fonction calcul.

  Apres ma fontion calcul je mais un \0 et retourne la valeur resulta.

  tans que truc i et truc de j sont egale tu fais i++ j ++
  si truc de i > j alors sais la plus grand
*/

char *preparation(char *a, char *b)
{
	infadd result;
	int lre = my_strlen(a);
	int lrc = my_strlen(b);

	management_less(&result, a, b);
	longsize(&result, a, b);
	result.a1 = malloc(sizeof(char) * lre + 1);
	result.b1 = malloc(sizeof(char) * lrc + 1);
	result.a1 = my_revstr(result.cpchara);
	result.b1 = my_revstr(result.cpcharb);
	result.carry = 0;
	result.res = malloc(sizeof(char) * (result.cnt1 + result.cnt2) + 1);
	result.i = 0;
	infin_add(&result, a, b);
	check(&result);
	return (result.res);
}

int main(void)
{
	infadd less;
	char *res;
	char *a = strdup("357");
	char *b = strdup("1321");

	less.lessa = 0;
	less.lessb = 0;
	res = preparation(a, b);
	my_putchar(less.lessa);
	my_putchar(less.lessb);
	my_putstr(res);
	my_putchar('\n');
	return (0);
}
