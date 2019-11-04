#include "lists.h"
/**
 * pop_listint - Deletes the head
 * @head: Head
 *
 * Description: Deletes the head node of a
 * listint_t linked list, and returns the
 * head node’s data (n).
 * Return: The number of nodes
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *tmp;

	if (!head)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
