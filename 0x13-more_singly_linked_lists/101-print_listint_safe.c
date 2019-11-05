#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Head
 *
 * Description: Prints a listint_t linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tmp;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		count++;
		
		if (!head)
			exit(98);
	}
	return (count);
}
