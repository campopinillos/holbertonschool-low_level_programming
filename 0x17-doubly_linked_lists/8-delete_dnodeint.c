#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node
 * @head: Doubly linked lists head
 * @index: Index of the list where the new node should be added
 *
 * Description: Deletes the node at index index of a dlistint_t
 * linked list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!*head)
		return (-1);
	while (index > 0)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		index--;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
