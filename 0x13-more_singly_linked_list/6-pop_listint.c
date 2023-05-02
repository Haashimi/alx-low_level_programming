#include "lists.h"

/**
 * pop_listint - function that deletes the h node of a listint_t.
 * @h: pointer to h in function
 * Return: node data.
 */
int pop_listint(listint_t **h)
{
	listint_t *new_h;
	int a;

	/*Ask if the h was not imput*/
	if (h == NULL || *h == NULL)
		return (0);

	new_h = (*h)->next;
	a = (*h)->n;
	free(*h);
	*h = new_h;
	return (a);
}
