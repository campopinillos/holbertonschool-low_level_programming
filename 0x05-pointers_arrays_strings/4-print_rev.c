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
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	n--;
	for (; s[n] >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
