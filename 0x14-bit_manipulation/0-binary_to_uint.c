#include "holberton.h"
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
	unsigned int dec = 0, binary, resid, last, base = 1;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	binary = atoi(b);
	resid = binary;
	while (resid)
	{
		last = resid % 10;
		dec += last * base;
		resid /= 10;
		base *= 2;
	}
	return (dec);
}
