#include "holberton.h"
/**
 * main - Accept empty value
 * _putchar - Print characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This is going to print Holberton
 * Return: 0 Value if it works
 */
int main(void)
{
	int x;
	char y[] = "Holberton";

	for (x = 0; x < 9; x++)
	{
		_putchar(y[x]);
	}
	_putchar('\n');
	return (0);
}
