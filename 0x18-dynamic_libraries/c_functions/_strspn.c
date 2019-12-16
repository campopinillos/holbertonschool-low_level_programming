#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: First input pointer origin
 * @accept: Second input char
 *
 * Description: Gets the length of a prefix substring
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, count;

	while (s[i] != 0)
	{
		count = j = 0;
		while (accept[j] != 0)
		{
			if (accept[j] == s[i])
				count = 1;
			j++;
		}
		if (count == 0)
			break;
		i++;
	}
	return (i);
}
