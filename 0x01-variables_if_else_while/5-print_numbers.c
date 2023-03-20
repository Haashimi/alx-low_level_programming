#include <stdio.h>

/**
 * main - print all single digit numbers of base ten starting from zero
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
