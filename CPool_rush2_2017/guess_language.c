/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** guess what language is
*/

#include "my.h"
#include "rush2.h"

float	freq_of_char(char *str, char c)
{
	unsigned int	i = 0;
	unsigned int	nb = 0;
	float		freq = 0;

	while (str[i] != '\0') {
		if (str[i] == c)
			nb += 1;
		i += 1;
	}
	freq = nb * 10000 / my_special_len(str);
	return (freq);
}

void	compare_to_lang(float dif[4])
{
	float		temp = dif[0];
	unsigned int	check = 0;
	unsigned int	i = 0;

	while (i < 4) {
		if (temp < dif[i]) {
			temp = dif[i];
			check = i;
		}
		i += 1;
	}
	if (check == 0)
		write(1, "=> English\n", 11);
	else
		print_language(check);
}


void	compare_to_tab(float language[4][26], float to_find[26])
{
	float		dif[4] = {0, 0, 0, 0};
	float		rslt = 0;
	unsigned int	i = 0;
	unsigned int	line = 0;

	while (line < 4) {
		i = 0;
		rslt = 0;
		while (i < 26) {
			rslt += ABS(language[line][i] - to_find[i]);
				i += 1;
		}
		dif[line] = rslt;
		line += 1;
	}
	compare_to_lang(dif);
}

void	loop(float language[4][26], char *str)
{
	float		to_find[26];
	unsigned int	i = 0;
	float		nb = 0;

	str = my_strlowcase(str);
	while (i < 26) {
		nb = freq_of_char(str, (char)(i + 97));
		to_find[i] = nb;
		i += 1;
	}
	compare_to_tab(language, to_find);
}

void	guess_language(char *str)
{
	float	language[4][26] = {{8.17, 1.49, 2.78, 4.25, 12.70, 2.23, 2.02,
				6.10, 6.97, 0.15, 0.77, 4.03, 2.41, 6.75, 7.51,
				1.93, 0.1, 5.99, 6.33, 9.06, 2.76, 0.98, 2.36,
				0.15, 1.97, 0.07},{7.64, 0.9, 3.26, 3.67,
				14.72, 1.07, 0.87, 0.74, 7.53, 0.61, 0.05,
				5.46, 2.97, 7.1, 5.8, 2.52, 1.36, 6.69, 7.95,
				7.24, 6.31, 1.84, 0.07, 0.43, 0.13, 0.33},
				{6.52, 1.89, 2.73, 5.08, 16.4, 1.7, 3, 4.58,
				6.55, 0.27, 1.42, 3.44, 2.53, 9.78, 2.59, 0.7,
				0.02, 7, 7.3, 6.15, 4.17, 0.85, 1.92, 0.03,
				0.04, 1.13},{11.53, 2.22, 4.02, 5.01, 12.18,
				0.69, 1.77, 0.7, 6.25,0.49, 0.01, 4.97, 3.16,
				6.71, 8.68, 2.51, 0.88, 6.88, 7.98, 4.63, 2.93,
				1.14, 0.02, 0.22, 1.01, 0.47}};
	loop(language, str);
}
