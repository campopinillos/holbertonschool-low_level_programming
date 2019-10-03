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
	char sep[] = " ,;.!?(){}\"\n\t";

	while (p[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if ((p[i] >= 97 && p[i] <= 122) && (p[i - 1] == sep[j]))
				p[i] -= 32;
			j++;
		}
		i++;
	}
	return (p);
}
