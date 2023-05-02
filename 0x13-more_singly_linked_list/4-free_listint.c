#include "lists.h"

/**
 * free_listint - function that free memory of all list.
 * @h: pointer to h in fucntion
 * Return: Always success.
 */
void free_listint(listint_t *h)
{
	listint_t *tempo;

	while (h != NULL)
	{
		tempo = h->next;
		free(h);
		h = tempo;
	}
}
