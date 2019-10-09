#include "holberton.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @n: First input number
 * @n: Second input power
 *
 * Description: Returns the value of x raised to the power of y
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 1 || y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
