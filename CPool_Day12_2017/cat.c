/*
** EPITECH PROJECT, 2017
** cat
** File description:
** cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int cat()
{
	int fd;
	char buffer[30720];

	fd = open("./test", O_RDONLY);
	if (fd == -1) {
		my_putstr("Error\n");
		return (84);
	}
	close(fd);
	return (0);
}

int main(int argc, char *argv)
{
	cat(argv[1]);
	return (0);
}
