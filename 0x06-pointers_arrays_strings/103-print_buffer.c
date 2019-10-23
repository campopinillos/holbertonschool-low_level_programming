#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - Adds two numbers
 * @b: First input pointer
 * @size: Buffer size
 *
 * Description: Adds two numbers
 * Return: char
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size > 0)
	{
		while (i < size)
		{
			printf("%08x: ", i);
			j = 0;
			while (j < 10)
			{
				if (j % 2 == 0 && j)
					printf(" ");
				if ((j + i) > size - 1)
					printf("  ");
				else
					printf("%.2x", b[i + j]);
				j++;
			}
			printf(" ");
			j = 0;
			while (j < 10)
			{
				if ((j + i) > size - 1)
					break;
				if (b[j + i] <= 31 || b[j + 1] >= 126)
					b[j + i] = 46;
				putchar(b[j + i]);
				j++;
		      	}
			printf("\n");
			i += 10;
		}
	}
	else
		printf("\n");
}
