#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Head
 *
 * Description: Finds the loop in a linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp1 = head, *tmp2 = head;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);
	while (tmp1)
	{
		tmp1 = tmp1->next;
		tmp2 = head;
		while (tmp1 && tmp2 != tmp1)
		{
			if (tmp2 == tmp1->next)
				return (tmp2);
			tmp2 = tmp2->next;
		}
	}
	return (tmp1);
}
