#include "main.h"

/**
  * _pow_recursion - Fuction returns the value of x raised to the power of y.
  * @x: The integer to be powerd.
  * @y: The power of x.
  *
  * Return: Return the power of x by y but if y is lower than 0 will return -1.
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
