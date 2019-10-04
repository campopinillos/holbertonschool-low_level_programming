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
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (p[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (p[i] == alpha[j])
			{
				p[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (p);
}
