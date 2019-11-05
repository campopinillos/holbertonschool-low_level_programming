#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Head
 * @idx: Index of the list where the new node should be added
 * @n: Integer
 *
 * Description: Inserts a new node at a given position.
 * Return: The number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *node, *tmp;

	if (!head && !*head)
		return (NULL);
	tmp = *head;
	if (idx == count)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}
	else
	{
		while (tmp)
		{
			if (idx == count + 1)
			{
				node = malloc(sizeof(listint_t));
				if (!node)
					return (NULL);
				node->n = n;
				node->next = tmp->next;
				tmp->next = node;
				return (node);
			}
			tmp = tmp->next;
			count++;
		}
	}
	return (NULL);
}
