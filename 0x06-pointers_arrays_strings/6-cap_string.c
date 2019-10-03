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
	int i = 0, j;
	int sep[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 13, 9, 32};

	while (p[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if ((p[i] == sep[j]) && (p[i + 1] >= 97 && p[i + 1] <= 122))
			{
				p[i + 1] -= 32;
			}
			j++;
		}
		i++;
	}
	return (p);
}
