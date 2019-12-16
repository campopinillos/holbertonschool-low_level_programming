#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Doubly linked lists
 * @n: Number
 *
 * Description: Adds a new node at the end of a dlistint_t list
 * Return: The number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return(node);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
	node->prev = tmp;
	return (node);




	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
