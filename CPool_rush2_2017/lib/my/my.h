/*
** EPITECH PROJECT, 2017
** my
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>

#define SPACE(x) (x == 0 ? 0 : 1)
#define SIZE_SPACE(x) (x == 0 ? 1 : 0)

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
void	put_char();
int	my_swap(int *a, int *b);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
int	size_nb(char const *str);
long	get_nbr(char const *str, int len);
int	my_pow(int len);
void	my_sort_int_array(int *tab, int size);
int	my_compute_power_rec(int nb, int power);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_islower(char const *str);
int	my_str_isupper(char const *str);
int	my_str_isprintable(char const *str);
int	my_showstr(char const *str);
void	my_show(char const *str, int i);
int	my_putnbr_base(int nbr, char const *base);
int	my_showmem(char const *str, int size);
char	*my_strcat(char *dest, char const *src);
char	*my_strncat(char *dest, char const *src, int nb);
char	*my_epur_str(char *str);
char	*clear_str(char *str);
char	*fill_new(char *str, int i);
int	my_isgood(char c);
int	my_show_word_array(char * const *tab);

#endif
