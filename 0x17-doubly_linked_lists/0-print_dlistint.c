#include "lists.h"
/**
 * read_textfile - Reads a text file
 * @filename: file
 * @letters:  is the number of letters it should read and print
 *
 * Description: Reads a text file and prints it to the POSIX
 * standard output
 * Return: actual number of letters it could read and print
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}