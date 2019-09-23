#include "holberton.h"
/**
 * main - Accept empty value
 * _putchar - Print characters one by one
 * @void: Description of a empty parameter
 *
 * Description: This prints 0 if the input is a lower and 1 if is not
 * Return: 0 Value if it works
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
