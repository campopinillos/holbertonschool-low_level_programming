#include "lists.h"
/**
 * free_listint - Frees a list
 * @head: Head
 *
 * Description: Frees a listint_t list
 * Return: The number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
