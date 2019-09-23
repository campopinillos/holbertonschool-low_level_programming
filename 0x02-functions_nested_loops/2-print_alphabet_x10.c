#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times in a row
 * _putchar - Prints characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This prints the alphabet 10 times
 * Return: 0 Value if it works
 */
void print_alphabet_x10(void)
{
	char x, y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
