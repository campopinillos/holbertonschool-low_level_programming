#include "holberton.h"
/**
 * wildcmp -  Compares two strings and returns 1 if considered identical
 * @str1: type char str
 * @str2: type char str wildcmp.
 * Return: 1 if str identical if not 0.
 */
int wildcmp(char *str1, char *str2)
{
	if (*str1 == 0 && *str2 == 0)
		return (1);
	else if (*str1 == 0 && *(str2 + 1) != 0 && *str2 == '*')
		return (0);
	else if (*str2 == '*')
		return (wildcmp(str1, str2 + 1) || wildcmp(str1 + 1, str2));
	else if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));
	return (0);
}
