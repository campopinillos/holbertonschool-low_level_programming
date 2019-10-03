#include "holberton.h"
/**
 * rot13 - Encodes a string using rot13
 * @p: First input pointer
 *
 * Description: Encodes a string using rot13
 * Return: char
 */

char *rot13(char *p)
{
	int i = 0, j;
	char root1[27] = "ABCDEFGHIJKLMabcdefghijklm";
	char root2[27] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	while (p[i] != '\0')
	{
		j = 0;
		while (j < 26)
		{
			if (p[i] == root1[j])
				p[i] = root2[j];
			else (p[i] == root2[j])
				p[i] = root1[j];
			j++;
		}
		i++;
	}
	return (p);
}
