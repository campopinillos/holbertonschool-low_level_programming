#include "holberton.h"
/**
 * cap_string - Capitalizes all words of a string
 * @p: First input pointer
 *
 * Description: Capitalizes all words of a string
 * Return: char
 */
char *cap_string(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			if ((p[i - 1] >= 0 && p[i - 1] <= 32) || p[i - 1] == 46)
				p[i] -= 32;
		}
		else if (p[i] == 9)
		{
			p[i] = 32;
		}
		i++;
	}
	return (p);
}
