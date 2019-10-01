#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: The evaluated input
 *
 * Description: Reverses a string
 * Return: n value
 */
void rev_string(char *s)
{
	int n = 0, position, max;
	char reserve;
	
	while (s[n] != '\0')
	{
		n++;
	}
	max = n - 1;
	for (position = 0; max >= 0 && position < max; max--, position++)
	{
		reserve = s[position];
		s[position] = s[max];
		s[max] = reserve;
	}
}
