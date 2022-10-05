#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free memory
 * @height: int of col
 * @grid: grid of int
 * Return: return pointer of grid array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
