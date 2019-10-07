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

	while (*needle != 0)
	{
		while (*haystack != 0 && *needle != 0)
		{
			if (*needle == *haystack)
				return (haystack);
			haystack++;
		}
		needle++;
	}
	return (NULL);
}
