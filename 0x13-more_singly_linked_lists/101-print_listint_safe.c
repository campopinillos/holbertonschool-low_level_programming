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
	size_t count = 0, i = 0;
	const listint_t *tmp, *tmp1;

	if (!head)
		exit(98);
	tmp = head;
	while (tmp)
	{
		tmp1 = head;
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = (*tmp).next;
		count++;
		i = 0;
		while (i < count)
		{
			if (tmp == tmp1)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			tmp1 = (*tmp1).next;
			i++;
		}
	}
	return (count);
}
