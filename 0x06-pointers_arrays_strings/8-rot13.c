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
	char alpha[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char root13[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	while (p[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (p[i] == alpha[j])
				p[i] = root13[j];
			j++;
		}
		i++;
	}
	return (p);
}
