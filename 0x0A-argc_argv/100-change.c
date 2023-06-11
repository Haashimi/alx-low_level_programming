#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the minimum number of coins
 *        to make change for an amount of money.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 for success, 1 for failure.
 */
int main(int argc, char **argv)
{
	int coins = 0;
	int amount = 0;
	int value[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (int i = sizeof(value) / sizeof(value[0]) - 1; i >= 0; i--)
	{
		coins += amount / value[i];
		amount %= value[i];

		if (amount == 0)
			break;
	}

	printf("%d\n", coins);

	return (0);
}

