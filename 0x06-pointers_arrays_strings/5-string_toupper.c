#include "holberton.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @p: First input pointer
 *
 * Description: Changes all lowercase letters of a string to uppercase
 * Return: char
 */
char *string_toupper(char *p)
{
	int i = 0;
	while (p[i] != '\0')
	{
		if (p[i] >= 97 && p[i] <= 122)
			p[i] -= 32;
		i++;
	}
	return (p);
}
