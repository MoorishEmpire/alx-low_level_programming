#include "main.h"
#include <unistd.h>
#include <stdio.h>

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
		printf("%s\n", argv[0]);
	return (0);
}

