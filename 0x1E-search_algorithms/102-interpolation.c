#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in an array
 *
 * @array: Pointer
 * @size: Size
 * @value: Search value
 *
 * Return: Value otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, lft = 0, rght = size - 1;

	if (!array)
		return (-1);
	while (rght >= lft)
	{
		i = lft + (((double)(rght - lft) / (array[rght] - array[lft])) *
			   (value - array[lft]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return ((int) i);
		if (array[i] > value)
			rght = i - 1;
		else
			lft = i + 1;
	}
	return (-1);
}
