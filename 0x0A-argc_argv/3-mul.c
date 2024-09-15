#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of the two numbers if the number of
  *		arguments is not two prints Error followed by a new line.
  * @argc: Number of arguments.
  * @argv: Pointer to pointer to a char.
  *
  * Return: 0 on Success.
  */
int	main(int argc, char *argv[])
{
	int nb1;
	int nb2;
	int mul;

	if (argc == 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		mul = nb1 * nb2;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

