#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - Copies memory area
 * @dest: First input pointer destination
 * @src: Second input pointer source
 * @n: Third input n bytes
 *
 * Description: Copies memory area
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s++ == c)
			break;
	}
	return ((*s != 0) ? s : NULL);
}
