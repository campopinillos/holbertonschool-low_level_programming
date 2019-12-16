#include "lists.h"
/**
 * free_dlistint - Adds a new node at the end of a list
 * @head: Doubly linked lists head
 *
 * Description: Adds a new node at the end of a dlistint_t list
 * Return: The number of nodes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
