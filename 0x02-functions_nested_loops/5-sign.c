#include "holberton.h"
/**
 * print_sign - Determine the sign and the size of a integer
 * _putchar - Prints characters one by one
 * @n: The evaluated input
 *
 * Description: This determines the sign and if it is greater or less than cero
 * Return: 0 Value if it works
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
