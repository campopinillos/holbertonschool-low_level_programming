#include "holberton.h"
/**
 * print_numbers - Prints the numbers from 0 to 9
 * _putchar - Print characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This prints the numbers from 0 to 9
 * Return: 0 Value if it works
 */
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
