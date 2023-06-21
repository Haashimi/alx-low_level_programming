#include "function_pointers.h"

/**
 * main - generates opcodes.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: the opcodes
 */

int main(int argc, char **argv)
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i == (num - 1))
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
