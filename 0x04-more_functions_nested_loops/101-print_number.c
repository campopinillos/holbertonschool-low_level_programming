#include "holberton.h"
/**
 * main - Print an integer
 * @n: Parameter input
 *
 * Description: Print an integer
 * Return: 0 Value if it works
 */
void print_number(int n)
{
	int x = 10;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		while (n % x != 0)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			x*=10;
		}
		_putchar('\n');
	}
}
