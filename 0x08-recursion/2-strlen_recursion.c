#include "holberton.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: First input pointer origin
 *
 * Description: Returns the length of a string
 * Return: The lenght
 */
int _strlen_recursion(char *s)
{
	int sum;

	if (*s == 0)
		return (0);
	sum = 1 + _strlen_recursion(s + 1);
	return (sum);
}
