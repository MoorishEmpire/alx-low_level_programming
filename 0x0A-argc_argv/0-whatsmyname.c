#include "main.h"
#include <unistd.h>
#include <stdio.h>

void	_putchar(char c)
{
	write(1, &c, 1);
}

void	_putstr(char *str)
{
	while (*str++)
		_putchar(*str);
	_putchar('\n');
}

int	main(int argc, char *argv[])
{
	if (argc)
		_putstr(argv[0]);
	return (0);
}

