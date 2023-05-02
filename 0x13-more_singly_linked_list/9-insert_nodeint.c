#include "lists.h"

/**
 * insert_nodeint_at_index - function that insert a node in a idx position
 * @h: pointer to h in function
 * @idx: index or position to be added
 * @n: node's value
 * Return: nth node data
 */
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int nodes;
	listint_t *node_index = *h;
	listint_t *new_node, *after_node;

	if (h == NULL || *h == NULL)
		return (NULL);

	for (nodes = 0; node_index != NULL; nodes++)
		node_index = node_index->next;

	if (idx > (nodes + 1))
		return (NULL);

	node_index = *h;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	else
	{
		after_node = *h;
		for (nodes = 0; nodes < (idx - 1); nodes++)
			node_index = node_index->next;
		for (nodes = 0; nodes < idx; nodes++)
			after_node = after_node->next;
		node_index->next = new_node;
		new_node->next = after_node;
		return (new_node);
	}
}
