#include "holberton.h"
/**
 * factorial - Returns the factorial of a number
 * @n: First input number
 *
 * Description: Returns the factorial of a number
 * Return: The factorial of a number
 */
int factorial(int n)
{
	unsigned long long int fact;

	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	fact = n * factorial(n - 1);

	return (fact);
}
