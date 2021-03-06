#include "holberton.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number
 * @index: is the index, starting from 0 of the bit to get
 *
 * Description: Returns the value of a bit at a given index
 * Return: the value of the bit at index index or -1 if an
 * error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bin, c = sizeof(n) * 8;
	unsigned int ind = c - 1;

	if (!n || index > ind)
		return (-1);
	if (n == 0)
		return (1);
	while (c > 0)
	{
		bin = n >> (c - 1);
		ind = c - 1;
		if (ind == index)
			return (bin & 1);
		 c--;
	}
	return (0);
}
