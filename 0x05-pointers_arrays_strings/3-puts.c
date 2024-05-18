#include "main.h"

/**
  * _puts - Prints a string, followed by a new line.
  * @str: The string to be printed
  */
void _puts(char *str)
{
	char *c;

	for (c = str + 0; *c != '\0'; c++)
	{
		_putchar(*c);
	}
	_putchar('\n');
}

