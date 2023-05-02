#include "lists.h"

/**
 * sum_listint - function that returns the sum of all nodes
 * @h: pointer to head in function
 * Return: the sum result
 */
int sum_listint(listint_t *h)
{
	listint_t *temp = h;
	int sum = 0;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
