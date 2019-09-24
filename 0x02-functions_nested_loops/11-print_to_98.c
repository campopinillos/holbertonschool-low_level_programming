#include "holberton.h"
/**
 * print_to_98 - Prints the secuence from n to 98
 * @n: The evaluated input
 *
 * Description: Prints the secuence from n to 98
 * Return: 0 Value if it works
 */
void print_to_98(int n)
{

	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n < 0)
			{
				print_sign(n);
				if (n <= -10)
				{
					_putchar(_abs(n) / 10 + '0');
					_putchar(_abs(n) % 10 + '0');
				}
				if (n > -10)
					_putchar(_abs(n) + '0');
			}
			if (n < 10 && n >= 0)
				_putchar(n + '0');
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n == 98)
				_putchar('\n');
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n >= 100)
			{
				_putchar(n / 100 + '0');
				_putchar(n / 110 + '0');
				_putchar(n % 10 + '0');
			}
			if (n < 100)
			{
				_putchar(n / 10 + '0');
                                _putchar(n % 10 + '0');
			}
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n == 98)
				_putchar('\n');
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}

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

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
