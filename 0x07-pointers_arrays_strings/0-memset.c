#include "holberton.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: First input pointer
 * @b: Second input char
 * @n: Third input n bytes
 *
 * Description: Fills memory with a constant byte
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
