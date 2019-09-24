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
	int x = 0;
	char y[] = "Holberton";

	while (x <= 9)
	{
		_putchar(y[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
