#include "lists.h"

/**
 * free_listp - function that frees a linked list
 * @h: h of a list.
 * Return: no return.
 */
void free_listp(listp_t **h)
{
	listp_t *temp;
	listp_t *current;

	if (h != NULL)
	{
		current = *h;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*h = NULL;
	}
}

/**
 * print_listint_safe - function that prints a linked list.
 * @h: h of a list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t node = 0;
	listp_t *hptr, *new, *sum;

	hptr = NULL;
	while (h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)h;
		new->next = hptr;
		hptr = new;

		sum = hptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (h == sum->p)
			{
				printf("-> [%p] %d\n", (void *)h, h->n);
				free_listp(&hptr);
				return (node);
			}
		}

		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		node++;
	}

	free_listp(&hptr);
	return (node);
}
