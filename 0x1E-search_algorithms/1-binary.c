#include "search_algos.h"
/**
 * binary_search - function that searches for a value in an array
 *
 * @array: Pointer
 * @size: Size
 * @value: Search value
 *
 * Return: Value otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i, lft = 0, rght = (int)size - 1;

	if (!array)
		return (-1);
	while (rght >= lft)
	{
		printf("Searching in array: ");
		for (i = lft; i < rght; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = lft + (rght - lft) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			rght = i - 1;
		else
			lft = i + 1;
	}
	return (-1);
}
