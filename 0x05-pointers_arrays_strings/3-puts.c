#include "holberton.h"
/**
 * _puts - Returns the length of a string
 * @str: The evaluated input
 *
 * Description: Returns the length of a string
 * Return: n value
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
