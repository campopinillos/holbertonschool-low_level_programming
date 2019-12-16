#include "holberton.h"
/**
 * _abs - Determine the absolute value of an integer
 * @n: The evaluated input
 *
 * Description: Prints the absolute value of an integer
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
