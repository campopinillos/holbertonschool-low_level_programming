#include "holberton.h"
/**
 * print_diagonal - Draws a diagonalt line in the terminal
 * _putchar - Prints characters one by one
 * @n: Parameter of times
 *
 * Description: Draws a diagonal line in the terminal
 * Return: 0 Value if it works
 */
void print_diagonal(int n)
{
	int y, z;

	if (n > 0)
	{
		for (z = 1; z <= n; z++)
		{
			for (y = 1; y <= n; y++)
			{
				if (y < z)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
