#include "holberton.h"
/**
 * print_rev - Returns the length of a string
 * @s: The evaluated input
 *
 * Description: Returns the length of a string
 * Return: n value
 */
void print_rev(char *s)
{
	int n = 0, lenght;

	while (s[n] != '\0')
	{
		n++;
	}
	for (lenght = n; s[lenght] >= 0; lenght--)
	{
		_putchar(s[lenght]);
	}
	_putchar('\n');
}
