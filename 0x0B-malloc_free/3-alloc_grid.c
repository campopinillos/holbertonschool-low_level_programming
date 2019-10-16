#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Firts input int width
 * @height: Secong input int height
 *
 * Description: Returns a pointer to a 2 dimensional array of integers
 * Return: 0 if it works
 */
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			free_grid(grid, i);
			return (NULL);
		}
		while (j < width)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}

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
