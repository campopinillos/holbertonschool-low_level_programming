#include "holberton.h"
/**
 * leet - Encodes a string into 1337g
 * @p: First input pointer
 *
 * Description: Encodes a string into 1337
 * Return: char
 */

char *leet(char *p)
{
	int i = 0, j;
	char letter[11] = "AEOTLaeotl";
	char num[11] = "4307143071";

	while (p[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (p[i] == letter[j])
				p[i] = num[j];
			 j++;
		}
		i++;
	}
	return (p);
}
