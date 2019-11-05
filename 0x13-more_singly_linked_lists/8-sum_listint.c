#include "lists.h"
/**
 * sum_listint - Returns sum
 * @head: Head
 *
 * Description: returns the sum of all the
 * data (n) of a listint_t linked list
 * Return: The number of nodes
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
