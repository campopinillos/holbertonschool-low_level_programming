#include "holberton.h"
/**
 * print_square - Draws a square line in the terminal
 * _putchar - Prints characters one by one
 * @size: Parameter of size
 *
 * Description: Draws a square line in the terminal
 * Return: 0 Value if it works
 */
void print_square(int size)
{
	int y, z;

	if (size > 0)
	{
		for (z = 1; z <= size; z++)
		{
			for (y = 1; y <= size; y++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
