#include "lists.h"
/**
 * print_dlistint - Prints the elements of a list
 * @h: Doubly linked lists
 *
 * Description: Prints all the elements of a dlistint_t list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
