#include "function_pointers.h"
/**
 * array_iterator - Executes on each element of an array
 * @array: Array
 * @size: Size of the array
 * @action: Pointer to the function you need to use
 *
 * Description: Executes a function given as a parameter
 * on each element of an array
 * Return: Empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i++]);
		}
	}
}
