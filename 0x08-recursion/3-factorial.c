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
	int sign = 1;

	if (n < 0)
		sign *= -1;
	if (n <= 1)
		return (1 * sign);
	fact = n * factorial(n - 1);

	return (fact * sign);
}
