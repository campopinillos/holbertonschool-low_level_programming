#include "holberton.h"
/**
 * _strncat - Concatenates two strings until n
 * @dest: First input
 * @src: Segundo input
 * @n: Lenght
 *
 * Description: Concatenates two strings until n
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, lengt_src = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + lengt_src) != '\0')
	{
		lengt_src++;
	}
	while (j < n && j < lengt_src)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
