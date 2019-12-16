#include "holberton.h"
/**
 * _isupper - Determine if a character is uppercase
 * @c: The evaluated letter
 *
 * Description: This prints 0 if the input is an uppercase and 1 if is not
 * Return: 0 Value if it works
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
