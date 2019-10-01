#include "holberton.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: First evaluated input
 * @b: Second evaluated input
 *
 * Description: Swaps the values of two integers.
 * Return: Empty
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
