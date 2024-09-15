#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
  * _putchar - Write the character that passed as an argument.
  * @c: The char that should be writen
  */
void	_putchar(char c)
{
	write(1, &c, 1);
}

/**
  * _putstr - Writes the string passed as an argument.
  * @str: The string to be writen.
  */
void	_putstr(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
  * main - check the code.
  * @argc: Number of argument passed in the commande line.
  * @argv: pointer to pointer to char.
  *
  * Return: 0 on Success.
  */
int	main(int argc, char *argv[])
{
	if (argc)
		_putstr(argv[0]);
	return (0);
}

