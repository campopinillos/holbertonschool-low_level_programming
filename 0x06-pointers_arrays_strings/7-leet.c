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
	int lower[6] = {97, 101, 111, 116, 108};
	int upper[6] = {65, 69, 79, 84, 76};
	char num[6] = "43071";

	while (p[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (p[i] == lower[j] || p[i] == upper[j])
				p[i] = num[j];
			 j++;
		}
		i++;
	}
	return (p);
}
