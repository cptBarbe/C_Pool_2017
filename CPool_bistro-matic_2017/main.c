/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include <stdlib.h>
#include <string.h>
#include <unistd.h
#include "bistro−matic.h"
#include "my.h"

int count_parentheses(char *);
int chek_syntax(char *);
char *infin_add(char *, char *);
char *infin_subs(char *, char *);
int my_atoi(char *);

static void check_base(char *);
static void check_ops (char *);
static char *get_expr(unsigned int);

int main(int ac, char **av)
{
	char *expr;
	unsigned int size;

	if (ac != 4) {
		my_putstr(" Usage :");
		my_putstr(av[0]);
		my_putstr("baseops\"() +_*/%\"exp_len\n");
		return(EXIT_USAGE);
	}
	check_base(av[1]);
	check_ops(av[2]);
	size = my_atoi(av[3]);
	expr = get_expr(size);
	my_putstr(eval_expr(av[1], av[2], expr, size));
	return(EXIT_SUCCESS);
}
