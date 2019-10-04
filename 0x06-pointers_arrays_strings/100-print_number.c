#include "holberton.h"
/**
 * print_number - Print an integer
 * @n: Parameter input
 *
 * Description: Print an integer
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
