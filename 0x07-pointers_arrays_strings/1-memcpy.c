#include "holberton.h"
/**
 * _memcpy - Copies memory area
 * @dest: First input pointer destination
 * @src: Second input pointer source
 * @n: Third input n bytes
 *
 * Description: Copies memory area
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		i++, dest++, src++;
	}
	return (dest);
}
