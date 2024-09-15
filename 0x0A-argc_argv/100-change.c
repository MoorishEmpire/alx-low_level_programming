#include <stdlib.h>
#include <stdio.h>

/**
  * nb_cents - Calculates number of cents.
  * @cents: the total of cents we have.
  *
  * Return: Number of cents.
  */
int	nb_cents(int cents)
{
	int counts;

	counts = 0;
	while (cents > 0)
	{
		if (cents >= 25)
		{
			counts += cents / 25;
			cents %= 25;
		}
		else if (cents >= 10)
		{
			counts += cents / 10;
			cents %= 10;
		}
		else if (cents >= 5)
		{
			counts += cents / 5;
			cents %= 5;
		}
		else if (cents >= 2)
		{
			counts += cents / 2;
			cents %= 2;
		}
		else
		{
			counts += cents / 1;
			cents %= 1;
		}
	}
	return (counts);
}

/**
  * main - Check the code.
  * @argc: Number of argumets.
  * @argv: Pointer to pointer to a char.
  *
  * Return: 0 on Success.
  */
int	main(int argc, char *argv[])
{
	int	cents;
	int	counts;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		if (cents <= 0)
			printf("0\n");

		counts = nb_cents(cents);
		printf("%d\n", counts);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

