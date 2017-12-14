/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** rush2.h
*/

#ifndef rush2_H_
#define rush2_H_

#define ABS(value) ((value) < (0) ? (-value) : (value))

int	my_special_len(char *str);
void	guess_language(char *str);
void	print_language(int i);
int	error_handling(int ac, char **av);

#endif
