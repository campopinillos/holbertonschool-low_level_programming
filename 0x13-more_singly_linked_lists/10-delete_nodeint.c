#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node
 * @head: Head
 * @index: Index of the node that should be deleted
 *
 * Description: Deletes the node at index index of a listint_t
 * linked list.
 * Return: The number of nodes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node, *tmp;

	tmp = *head;
	if (*head && index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (index == count + 1)
		{
			node = tmp->next;
			if (node)
			{
				tmp->next = node->next;
				free(node);
				return (1);
			}
		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
