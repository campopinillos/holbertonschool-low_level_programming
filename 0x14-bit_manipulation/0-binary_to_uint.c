#include "holberton.h"
unsigned int power(int n);
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Is pointing to a string of 0 and 1 chars
 *
 * Description: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 * Return: Number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (*b)
	{
		decimal += (*b - '0') * power(i - 1);
		i--, b++;
	}
	return (decimal);
}

/**
 * power - Calculates the power
 * @n: longitud
 *
 * Description: Calculates the power
 * Return: power
 */
unsigned int power(int n)
{
	unsigned int base =  2;

	if (n == 0)
		return (1);
	while (n > 1)
		base *= 2, n--;
	return (base);
}
