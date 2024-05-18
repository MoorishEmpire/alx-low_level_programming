#include "main.h"
#include <string.h>

/**
  * _strlen - Functions that return the length of a string.
  * @s: The string to be checked
  *
  * Return: The length of the string.
  */
int _strlen(char *s)
{
	int count;
	char *c;
	
	count = 0;
	for (c = s + 0; *c != '\0'; c++)
	{
		count++;
	}
	return (count);

}

