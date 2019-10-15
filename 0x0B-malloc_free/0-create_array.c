#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of chars, initializes with specific char
 * @size: Firts input int argument
 * @c: Second input char argument of string
 *
 * Description: Creates an array of chars
 * Return: 0 if it works
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i = 0;
	unsigned int j = size;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(*str));
	if (str == NULL)
		return (NULL);

	while (j > 0)
	{
		str[i] = c;
		i++, j--;		
	}

	return (str);
}
