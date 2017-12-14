/*
** EPITECH PROJECT, 2017
** checks
** File description:
** checks
*/

static void check_base(char *b)
{
	if(my_strlen(b) < 2) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit (EXIT_BASE);
	}
}

static char *get_expr(unsigned int size)
{
	char *expr;
	if (size <= 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_SIZE_NEG);
	}
	expr = malloc(size + 1) ;
	if (expr == 0) {
		my_putstr(ERROR_MSG);
		exit (EXIT_MALLOC);
	}
	if (read(0, expr, size) ! = size) {
		my_putstr(ERROR_MSG);
		exit (EXIT_READ);
	}
	expr[size] = 0;
	return (expr);
}

static void check_ops(char *ops)
{
	if (my_strlen(ops) != 7) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit (EXIT_OPS);
	}
}
