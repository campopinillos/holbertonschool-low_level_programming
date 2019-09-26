#include "holberton.h"
/**
 * print_line - Draws a straight line in the terminal
 * _putchar - Prints characters one by one
 * @n: Parameter of times
 *
 * Description: Draws a straight line in the terminal
 * Return: 0 Value if it works
 */
void print_diagonal(int n)
{
	char x = ' ';
	int y, z;

	if (n >= 0)
	{
		for (z = 1; z <= n; z++)
		{
			for (y = 1; y <= n; y++)
			{
				if (y < z)
					_putchar(x);
			}
			_putchar('\\');
			_putchar('\n');
		}
	_putchar('\n');
	}
}
