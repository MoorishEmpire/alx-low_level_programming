#include "main.h"

/**
  * print_triangle - Prints a triangle, followed by a new line.
  * @size: The size of the triangle to be printed
  */
void print_triangle(int size)
{
	int i, k;

	for (i = 1; i <= size; i++)
	{
		for (k = 0; k < (size - i); k++)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
