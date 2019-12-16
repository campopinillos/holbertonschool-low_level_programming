#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - Gets the length of a prefix substring
 * @s: First input pointer origin
 * @accept: Second input char
 *
 * Description: Gets the length of a prefix substring
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != 0)
	{
		j = 0;
		while (accept[j] != 0)
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}
	return (NULL);
}
