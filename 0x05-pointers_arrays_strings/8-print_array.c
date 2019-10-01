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
	int z = 0, lenght, x;

	while (a[z] != '\0')
	{
		z++;
	}
	lenght = z;
	for (x = 0; x < n - 1 && x <= lenght; x++)
	{
		printf("%d, ", *(a + x));
	}
	printf("%d\n", *(a + n - 1));
}
