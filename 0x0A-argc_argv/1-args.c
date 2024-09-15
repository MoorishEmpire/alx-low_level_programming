#include <stdio.h>

/**
  * main - Prints the number of arguments entered in the commande line.
  * @argc: The number of arguments.
  * @argv: The pointer to pointer to a char.
  *
  * Return: 0 on Success.
  */
int	main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}

