#include "lists.h"
/**
 * dlistint_len - Returns the number elements of a list
 * @h: Doubly linked lists
 *
 * Description: Returns the number of elements in a
 * linked dlistint_t list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
