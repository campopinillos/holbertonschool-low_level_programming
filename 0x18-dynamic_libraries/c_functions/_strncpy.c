#include "holberton.h"
/**
 * _strncpy - Copies a string
 * @dest: First input
 * @src: Segundo input
 * @n: Lenght
 *
 * Description: Copies a string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
