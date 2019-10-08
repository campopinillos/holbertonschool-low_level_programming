#include "holberton.h"
/**
 * print_chessboard - Prints the chessboard
 * @haystack: First input pointer origin
 * @needle: Second input char
 *
 * Description: Prints the chessboard
 * Return: char
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
