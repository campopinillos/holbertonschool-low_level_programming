#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @h: Doubly linked lists
 *
 * Description: Adds a new node at the beginning of a dlistint_t list
 * Return: The number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}