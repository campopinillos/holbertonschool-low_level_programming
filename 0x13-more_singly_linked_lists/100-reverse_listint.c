#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Head
 *
 * Description: Reverses a listint_t linked list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *head1, *tail;

	if (!head && !*head)
		return (NULL);
	head1 = *head;
	*head = NULL;
	while (head1)
	{
		tail = head1;
		head1 = head1->next;
		tail->next = *head;
		*head = tail;
	}
	return (*head);
}
