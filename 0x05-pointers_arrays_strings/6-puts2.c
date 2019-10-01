#include "holberton.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The evaluated input
 *
 * Description: Prints every other character of a string
 * Return: n value
 */
void puts2(char *str)
{
	int n = 0, lenght, x;

	while (str[n] != '\0')
	{
		n++;
	}
	lenght = n;
	for (x = 0; x < lenght; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
