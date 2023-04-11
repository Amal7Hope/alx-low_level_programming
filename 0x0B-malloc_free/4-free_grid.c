#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid created in
 * @grid: p to p
 * @height: height og grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
