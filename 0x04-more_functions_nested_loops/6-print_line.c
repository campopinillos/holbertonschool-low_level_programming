#include "holberton.h"
/**
 * print_line - Draws a straight line in the terminal
 * _putchar - Prints characters one by one
 * @n: Parameter of times
 *
 * Description: Draws a straight line in the terminal
 * Return: 0 Value if it works
 */
void print_line(int n)
{
	char x = '_';
	int y;

	for (y = 0; y <= n; y++)
	{
		if (y != 0)
			_putchar(x);
	}
	_putchar('\n');
}
