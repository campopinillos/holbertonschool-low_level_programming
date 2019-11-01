#include "lists.h"
int _strlen(const char *s);
/**
 * add_node - adds a new node at the beginning
 * @head: Head
 * @str: Char pointer
 *
 * Description: adds a new node at the beginning
 * of a list_t list.
 * Return: The number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * _strlen - String lenght
 * @str: String pointer
 *
 * Description: String lenght
 * Return: Lenght
 */
int _strlen(const char *str)
{
	unsigned int n = 0;

	while (str[n] != 0)
		n++;
	return (n);
}
