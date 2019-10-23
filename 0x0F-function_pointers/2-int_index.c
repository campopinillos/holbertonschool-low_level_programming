#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Size of the array
 * @cmp: Pointer to the function used to compare value
 *
 * Description: Executes a function given as a parameter
 * on each element of an array
 * Return: Empty
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i++]) == 0)
				continue;
			else
				break;
		}
		if (i >= size)
			return (-1);
	}
	return (i - 1);
}
