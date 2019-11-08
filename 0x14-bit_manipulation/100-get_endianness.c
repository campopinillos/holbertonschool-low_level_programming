#include "holberton.h"
/**
 * get_endianness - Checks the endianness
 * @void: Empty
 *
 * Description: Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *) &x;

	return	(*c ? 1 : 0);
}
