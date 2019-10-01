#include "holberton.h"
/**
 * print_number - Print an integer
 * @n: Parameter input
 *
 * Description: Print an integer
 * Return: 0 Value if it works
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
