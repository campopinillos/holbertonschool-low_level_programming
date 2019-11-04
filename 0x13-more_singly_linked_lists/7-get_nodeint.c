#include "lists.h"
/**
 * get_nodeint_at_index - Returns nth node index
 * @head: Head
 * @index: Unsigned integer
 *
 * Description: Returns the nth node of a
 * listint_t linked list
 * Return: The number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp;

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
