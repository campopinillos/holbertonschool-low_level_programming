#include "holberton.h"
/**
 * lenght - Returns the length of a string
 * @str: First input string
 *
 * Description: Returns the length of a string
 * Return: The lenght
 */
int lenght(char *str)
{
	if (*str == 0)
		return (0);
	return (1 + lenght(str + 1));
}

/**
 * palindrome - Returns if a string is a palindrome
 * @string: First input pointer origin
 * @i: Second input lenght of the string
 *
 * Description: Returns the length of a string
 * Return: The lenght
 */
int palindrome(char *string, int i)
{
	if (i <= 1)
		return (1);
	if (*string == *(string + i - 1))
		return (palindrome(string + 1, i - 2));
	return (0);
}

/**
 * is_palindrome - Returns 1 if the input is a palindrome
 * @s: First input number
 *
 * Description: Returns 1 if the input integer is a prime number
 * Return: 1 if is palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	return (palindrome(s, lenght(s)));
}
