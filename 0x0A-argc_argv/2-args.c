#include <stdio.h>

/**
  * main - Prints all the arguments entered in the commmand line.
  * @argc: Number of the arguments.
  * @argv: Pointer to pointer to a char.
  *
  * Return: 0 on Success.
  */
int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

