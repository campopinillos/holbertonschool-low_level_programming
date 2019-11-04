#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning
 * @head: Head
 * @n: Integer
 *
 * Description: adds a new node at the beginning
 * of a list_t list.
 * Return: The number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head)
		*head = node;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	return (node);
}
