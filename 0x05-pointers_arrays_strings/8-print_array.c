#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: The evaluated input
 * @n: The print lentght input
 *
 * Description: Prints n elements of an array of integers
 * Return: n value
 */
void print_array(int *a, int n)
{
	int x, z = 0;

	while (a[z] != '\0')
	{
		z++;
	}
	z--;
	for (x = 0; x < n - 1; x++)
	{
		if (a[x] != '\0' && x < z)
			printf("%d, ", *(a + x));
	}
	printf("%d\n", *(a + n - 1));
}
