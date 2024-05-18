#include "main.h"

/**
  * _strcpy - Copies the string pointed to by src, including the terminating null byte,
  * to the buffer pointed to by dest.
  * @dest: The first argument
  * @src: The seconde argument
  * Return: Return a pointer to a char
  */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while((*dest++ = *src++));

	return dest_start;
}

