#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees grid
 * @grid: Firts input int pointer
 * @height: Secong input int height
 *
 * Description: Frees grid
 * Return: Empty value
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i++]);
	free(grid);
}
