#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: Firts input int
 * @max: Second input int
 *
 * Description: Creates an array of integers
 * Return: String
 */
int *array_range(int min, int max)
{
	int *str;
	int i = 0, num = 0, size;

	if (min > max)
		return (NULL);
	size = max - min;
	str = (int *) malloc(sizeof(int) * (size + 1));
	if (str == 0)
		return (NULL);
	while (i <= size)
		str[i++] = num++;
	return (str);
}
