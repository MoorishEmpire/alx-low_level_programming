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
	int	sum;
	int	i;
	int	j;

	if (argc >= 2)
	{
		sum = 0;
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}

