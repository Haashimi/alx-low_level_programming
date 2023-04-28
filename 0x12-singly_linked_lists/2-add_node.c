#include "lists.h"

/**
 * add_node - function that adds a node at the begining of a list.
 * @head: current head address
 * @str: pointer to string
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_new;
	size_t nchar;

	node_new = malloc(sizeof(list_t));
	if (node_new == NULL)
		return (NULL);

	node_new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	node_new->len = nchar;
	node_new->next = *head;
	*head = node_new;

	return (*head);
}
