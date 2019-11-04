#include "lists.h"
/**
 * free_list - Adds a new node at the end
 * @head: Head
 *
 * Description: Adds a new node at the end
 * of a list_t list
 * Return: The number of nodes
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		free(temp->n);
		head = head->next;
		free(temp);
	}
	free(head);
}
