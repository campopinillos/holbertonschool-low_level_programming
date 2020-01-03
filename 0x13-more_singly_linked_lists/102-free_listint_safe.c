#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer
 *
 * Description: Frees a listint_t list
 * Return: The size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *safe_node, *tmp;
	size_t n = 0;

	if (!h)
		return (0);
	while (*h)
	{
		safe_node = (*h)->next;
		tmp = *h;
		free(*h);
		*h = NULL;
		n++;
		if (tmp < safe_node)
			break;
		*h = safe_node;
	}
	return (n);
}
