#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strlen - Calculates the length of a string.
  * @str: The string to be calcutated.
  *
  * Return: the length of a string.
  */
int	_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/**
  * argstostr - Function that concatenates all the arguments of the program.
  * @ac: the number of arguments.
  * @av: The array of arguments.
  *
  * Return: Pointer to a new string, or NULL if it fails.
  * Each argument is followed by a newline character in the string.
  */
char	*argstostr(int ac, char **av)
{
	char	*ptr;
	char	*temp;
	int	i;
	int	j;
	int	total_len;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_len = 0;
	i = 0;
	while (i < ac)
	{
		total_len += _strlen(av[i]) + 1;
		i++;
	}
	ptr = (char *)malloc((total_len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	temp = ptr;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			*temp++ = av[i][j++];
		}
		*temp++ = '\n';
		i++;
	}
	*temp = '\0';
	return (ptr);
}


