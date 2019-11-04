#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: Head
 * @n: Integer
 *
 * Description: adds a new node at the beginning
 * of a listint_t list.
 * Return: The number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
