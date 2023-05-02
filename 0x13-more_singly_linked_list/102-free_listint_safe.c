#include "lists.h"

/**
 * free_listp2 - function that frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - function that frees a linked list.
 * @h: head of a list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node = 0;
	listp_t *hptr, *new, *sum;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		sum = hptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (*h == sum->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (node);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		node++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (node);
}
