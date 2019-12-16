#include "holberton.h"
/**
 * _isdigit - Determine if is it a number
 * @c: The evaluated input
 *
 * Description: Determine if is it a number between 0 and 9
 * Return: 0 Value if it works
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
