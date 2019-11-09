#include "holberton.h"
/**
 * set_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to Number
 * @index: is the index, starting from 0 of the bit to set
 *
 * Description: Sets the value of a bit to 0 at a given index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c = (sizeof(n) * 8) -  1;
	int one = 1;

	if (index > c)
		return (-1);
	*n &= ~(one << index);
	return (1);
}
