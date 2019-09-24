#include "holberton.h"
/**
 * print_last_digit - Determine the sign and the size of a integer
 * @n: The evaluated input
 *
 * Description: This determines the sign and if it is greater or less than cero
 * Return: 0 Value if it works
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = -1 * (n % 10);
		_putchar(last + '0');
		return (last);
	}
}
