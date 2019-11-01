#include "lists.h"
/**
 * list_len - Returns number elements in a linked list
 * @h: Char pointer
 *
 * Description: returns the number of elements in a 
 * linked list_t list.
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
		h = h->next, count++;
	return (count);
}
