#include "holberton.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: Number
 *
 * Description: Prints the binary representation of a number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int bin, count;
	int c = sizeof(n) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (c > 0)
	{
		bin = n >> (c - 1);
		if (bin & 1)
			count = 1;
		if (count == 1)
			_putchar((bin & 1) + '0');
		 c--;
	}
}
