#include "holberton.h"
/**
 * more_numbers - Print the numbers till 14, 10 times in a row
 * _putchar - Prints characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This prints the numbers 10 times
 * Return: 0 Value if it works
 */
void more_numbers(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
