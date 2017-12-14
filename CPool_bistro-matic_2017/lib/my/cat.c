/*
** EPITECH PROJECT, 2017
** cat
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int my_putstr(char *);

int cat(char *str)
{
	int fd;
	char buffer[30720];

	fd = open(str, O_RDONLY);
	if (fd == -1) {
		my_putstr("Error\n");
		return (84);
	}
	close(fd);
	return (0);
}
