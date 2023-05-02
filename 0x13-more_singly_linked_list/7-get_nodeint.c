#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @h: pointer to head in function
 * @index: the node that will be returned
 * Return: nth node data
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
	unsigned int counter = 0, nodes;
	listint_t *temp = h;

	/*Ask if there isn't input*/
	if (h == NULL)
		return (NULL);

	/*Count the num of nodes*/
	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (index > nodes)
		return (NULL);

	temp = h;
	while (counter <= index)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
