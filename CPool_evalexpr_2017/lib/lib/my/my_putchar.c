/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** char
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
