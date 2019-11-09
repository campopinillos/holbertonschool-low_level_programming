#include "holberton.h"
/**
 * flip_bits - Number of bit to flip
 * @n: First input number
 * @m: Second input number
 *
 * Description: returns the number of bits you would
 * need to flip to get from one number to another
 * Return: 1 if it worked, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int c = sizeof(unsigned long int) * 8;

	while (c > 0)
	{
		count += (((n ^ m) >> c) & 1) ? 1 : 0;
		c--;
	}
	return (count);
}
