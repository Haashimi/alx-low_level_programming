#include "lists.h"

/**
 * reverse_listint - function that reverse a list
 * @h: pointer to h in function
 * Return: pointer to the first node of new list
 */
listint_t *reverse_listint(listint_t **h)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	if (h == NULL)
		return (NULL);

	while (*h != NULL)
	{
		next = (*h)->next;
		(*h)->next = prev;
		prev = *h;
		*h = next;
	}
	*h = prev;
	return (*h);
}
