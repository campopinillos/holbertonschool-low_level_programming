#include "holberton.h"
/**
 * main - Accept empty value
 * putchar - Print characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This is going to print ud Holberton"
 * Return: 0 Value if it works
 */
int main(void)
{
	int x;
	char y[9] = "Holberton";

	for (x = 0; x <= 9; x++)
	{
		_putchar(y[x]);
	}
	_putchar('\n');
	return (0);
}
