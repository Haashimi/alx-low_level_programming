#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a list.
 * @h: current h address
 * @n: number to fill the node
 * Return: number of nodes.
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new_node;
	listint_t *last = *h;

	/* In case there isn't input a h*/
	if (h == NULL)
		return (NULL);

	/*Allocate the new node*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/*Assign info to the new node*/
	new_node->n = n;
	new_node->next = NULL;

	/*Assign the h if the list is empty*/
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}

	/*If the list isn't empty, find the last node and connect the new node*/
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;

	return (new_node);
}
