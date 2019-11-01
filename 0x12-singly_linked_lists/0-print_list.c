
#include "lists.h"
/**
 * print_list - Prints all the elements of a list
 * @h: Char pointer
 *
 * Description: Prints all the elements
 * of a list_t list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
