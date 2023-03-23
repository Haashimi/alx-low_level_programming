#include "main.h"

/**
 * main - Entry point
 * Description: print value of n status; zero, positive or negative
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is Zero\n", n);
	else
		printf("%d is Negative\n", n);

}
