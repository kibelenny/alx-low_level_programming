#include "main.h"
/**
 * free_grid - free grid in memory
 * @grid: grid to clear
 * @height: height
 * Return: none
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
