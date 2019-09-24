#include "holberton.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * @void: The evaluated input
 *
 * Description: Prints the 9 times table, starting with 0
 * Return: 0 Value if it works
 */
void times_table(void)
{
	int n, m, mult;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			mult = n * m;
			if (m == 0 && mult < 10)
			{
				_putchar((mult) + '0');
			}
			else if (n == 0 && m != 0)
			{
				_putchar(' ');
				_putchar((mult) + '0');
			}
			else if (mult < 10)
			{
				_putchar(' ');
				_putchar((mult) + '0');
			}
			else
			{
				_putchar(((mult) / 10) + '0');
				_putchar(((mult) % 10) + '0');
			}
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
