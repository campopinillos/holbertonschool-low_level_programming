#include "holberton.h"
/**
 * _isalpha - Determine if is it a character
 * @c: The evaluated input
 *
 * Description: This prints 1 if c is a letter, lowercase or uppercase
 * Return: 0 Value if it works
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
