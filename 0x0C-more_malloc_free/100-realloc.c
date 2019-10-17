#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Reallocates a memory block using malloc and free
 * @ptr: Firts input pointer
 * @old_size: Second input unsigned int
 * @new_size: Third input unsigned int
 *
 * Description: Reallocates a memory block
 * Return: String
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *reserv;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	p = (void *) malloc(new_size);
	if (!p)
		return (NULL);
	if (!ptr)
		return (p);
	reserv = ptr;
	while (i < old_size)
	{
		p[i] = reserv[i];
		i++;
	}
	free(ptr);
	return (p);
}
