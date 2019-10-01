#include "holberton.h"
/**
 * _strcpy - Copies the string pointed to by src
 * @dest: Destination
 * @src: Source
 *
 * Description: Copies the string pointed to by src
 * Return: n value
 */
int _atoi(char *s)
{
int i, n = 0;

for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
{
	n=10 * n + (s[i]- '0'); 
}

return (n);