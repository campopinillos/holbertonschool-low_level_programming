#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring
 * @haystack: First input pointer origin
 * @needle: Second input char
 *
 * Description: Locates a substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack == *n && *n != 0 && *haystack != 0)
			haystack++, n++;
		if (*n == 0)
			return (h);
		haystack = ++h;
	}
	return (NULL);
}
