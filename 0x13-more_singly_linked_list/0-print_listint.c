#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the list header address
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;
	const listint_t *tempo;

	if (h == NULL)
		return (0);

	tempo = h;
	for (n = 0; tempo != NULL; n++)
	{
		printf("%d\n", tempo->n);
		tempo = tempo->next;
	}
	return (n);
}
