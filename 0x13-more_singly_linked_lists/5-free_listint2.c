#include "lists.h"
/**
 * free_listint2 - Frees a list
 * @head: Head
 *
 * Description: Frees a listint_t list
 * Return: The number of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
