#include "lists.h"

/**
 * free_listint2 - function that free memory of all list.
 * @h: pointer to h in function
 * Return: Always success.
 */
void free_listint2(listint_t **h)
{
	listint_t *curr;
	listint_t *next;

	if (h == NULL)
		return;
	if (*h == NULL)
		return;

	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	*h = NULL;
}
