#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet
 * _putchar - Print characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This prints the alphabet
 * Return: 0 Value if it works
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
