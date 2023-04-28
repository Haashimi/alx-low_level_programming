#include "lists.h"

/**
 * free_list - free memory of all list.
 * @head: pointer to head in fucntion
 * Return: Always success.
 */
void free_list(list_t *head)
{
	list_t *curr_node, *nxt_node;

	curr_node = head;
	while (curr_node != NULL)
	{
		nxt_node = curr_node;
		free(curr_node->str);
		free(curr_node);
		curr_node = nxt_node->next;
	}
}
