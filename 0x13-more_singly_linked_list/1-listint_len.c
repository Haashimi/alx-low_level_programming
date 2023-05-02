#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list.
 * @h: pointer to the header address
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
