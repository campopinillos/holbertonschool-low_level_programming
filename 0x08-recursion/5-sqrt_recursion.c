#include "holberton.h"
/**
 * _square_root - Returns the square root of a number
 * @base: First input number
 * @pow: Second input power
 *
 * Description: Returns the square root of a number
 * Return: Square root of a number
 */
int _square_root(int base, int root)
{
	if (base == root * root)
		return (root);
	else if (base < root * root)
		return (-1);
	return (_square_root(base, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: First input number
 *
 * Description: Returns the natural square root of a number
 * Return: Square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}

