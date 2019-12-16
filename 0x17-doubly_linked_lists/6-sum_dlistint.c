#include "lists.h"
/**
 * sum_dlistint - Returns the nth node of a linked list
 * @head: Doubly linked lists head
 *
 * Description: Returns the nth node of a dlistint_t linked list
 * Return: Index
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
