#include "holberton.h"

/**
 * puts_half - Prints half of a string
 * @str: The evaluated input
 *
 * Description: Prints half of a string
 * Return: n value
 */
void puts_half(char *str)
{
	int n = 0, lenght, x;

	while (str[n] != '\0')
	{
		n++;
	}
	lenght = n + 1;
	for (x = (lenght / 2); x < lenght; ++x)
	{
		if (str[x] != '\0')
			_putchar(str[x]);
	}
	_putchar('\n');
}
