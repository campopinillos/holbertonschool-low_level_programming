#include "holberton.h"
/**
 * reverse_array - Reverses the content of an array of integers
 * @a: First input string
 * @n: Segundo input number of elements of the array
 *
 * Description: Reverses the content of an array of integers
 * Return: dest
 */
void reverse_array(int *a, int n)
{
	int j, i, reserve;

	for (j = 0, i = n - 1; i > 0 && j < i; j++, i--)
	{
		reserve = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = reserve;
	}
}
