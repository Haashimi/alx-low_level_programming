#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: pointer to the list address
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int j;

	for (j = 0; h != NULL; j++)
	{
		h = h->next;
	}
	return (j);
}
