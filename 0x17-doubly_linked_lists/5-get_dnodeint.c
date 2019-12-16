#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 * @head: Doubly linked lists head
 * @index: Index node
 *
 * Description: Returns the nth node of a dlistint_t linked list
 * Return: Index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		if (n == index)
			return (tmp);
		head = head->next;
		n++;
	}
	return (NULL);
}
