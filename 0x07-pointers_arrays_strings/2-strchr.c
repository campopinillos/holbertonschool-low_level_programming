#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: First input pointer origin
 * @c: Third input char
 *
 * Description: Locates a character in a string
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s++ == c)
			break;
	}
	return ((*s != c) ? NULL : s);
}
