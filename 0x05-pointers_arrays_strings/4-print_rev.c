#include "holberton.h"
/**
 * print_rev - Prints a string, in reverse
 * @s: The evaluated input
 *
 * Description: Prints a string, in reverse
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
	while (n >= 0)
	{
		_putchar(s[n]);
		--n;
	}
	_putchar('\n');
}
