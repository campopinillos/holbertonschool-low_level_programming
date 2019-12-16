#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Doubly linked lists head
 * @idx: Index of the list where the new node should be added
 * @n: Number
 *
 * Description: Inserts a new node at a given position
 * Return: Index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx > 1)
	{
		tmp = tmp->next;
		if (!tmp)
			return (NULL);
		idx--;
	}
	if (!tmp->next)
		return (add_dnodeint_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = tmp;
	node->next = tmp->next;
	tmp->next->prev = node;
	tmp->next = node;
	return (node);
}
