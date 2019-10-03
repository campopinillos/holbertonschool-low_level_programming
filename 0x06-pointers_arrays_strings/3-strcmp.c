#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: First input
 * @s2: Segundo input
 *
 * Description: Compares two strings
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
