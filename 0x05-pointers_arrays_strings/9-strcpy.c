#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Destination
 * @src: Source
 *
 * Description: Copies the string pointed to by src
 * Return: n value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
