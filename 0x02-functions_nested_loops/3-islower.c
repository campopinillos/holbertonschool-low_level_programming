#include "holberton.h"
/**
 * _islower - Determine if a character is lowercase
 * @c: The evaluated letter
 *
 * Description: This prints 0 if the input is a lower and 1 if is not
 * Return: 0 Value if it works
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
